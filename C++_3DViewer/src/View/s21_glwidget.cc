#include "s21_glwidget.h"

#include "../Controller/s21_controller.h"

namespace s21 {

GLWidget::GLWidget(QWidget *parent) : QOpenGLWidget(parent) {}

void GLWidget::InitShaders() {
  shader_program_.addShaderFromSourceCode(
      QOpenGLShader::Vertex,
      "#version 330 core\n"
      "layout (location = 0) in vec3 aPos;\n"
      "uniform mat4 projection;\n"
      "void main()\n"
      "{\n"

      "   gl_Position = projection * vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
      "}\0");

  shader_program_.addShaderFromSourceCode(QOpenGLShader::Fragment,
                                          "#version 330 core\n"
                                          "uniform vec4 FragColor;\n"
                                          "void main()\n"
                                          "{\n"
                                          "   gl_FragColor = FragColor;\n"
                                          "}\n\0");

  if (!shader_program_.link()) close();

  if (!shader_program_.bind()) close();
}

void GLWidget::initializeGL() {
  initializeOpenGLFunctions();
  InitShaders();
}

void GLWidget::resizeGL(int w, int h) { glViewport(0, 0, w, h); }
void GLWidget::paintGL() {
  PaintBackground();

  SetUpMVP();
  DrawVertices();
  DrawEdges();
}

void GLWidget::Clear() {
  if (vertices_) delete[] vertices_;
  if (indices_) delete[] indices_;
  vertices_ = nullptr;
  indices_ = nullptr;
  vertex_buffer_.destroy();
  index_buffer_.destroy();
  VAO_.destroy();
}

void GLWidget::SetUpMVP() {
  projection_.setToIdentity();
  qreal aspect = qreal(width()) / qreal(height());
  const qreal zNear = 0.1, zFar = 100.0, fov = 45;
  if (render_params_.projection_type == kParallel)
    projection_.ortho(-aspect, aspect, -1, 1, zNear, zFar);
  if (render_params_.projection_type == kCentral)
    projection_.perspective(fov, aspect, zNear, zFar);
  projection_.translate(0.0, 0.0, -3.0);
  shader_program_.setUniformValue("projection", projection_);
}

void GLWidget::SetObjectGeometry() {
  if (s21::Controller::Get()->GetStatus() != 0) return;
  LoadObjectGeometry();
  CreateBuffers();
}

void GLWidget::LoadObjectGeometry() {
  std::vector<double> vertices = s21::Controller::Get()->GetVertices();

  double *axis_values = new double[vertices.size()];

  for (size_t i = 0; i < vertices.size(); ++i) {
    axis_values[i] = vertices[i];
  }
  vertices_ = axis_values;

  if (!indices_) {
    std::vector<int> indices = s21::Controller::Get()->GetIndices();
    unsigned int *indices_values = new unsigned int[indices.size()];

    for (std::vector<int>::size_type i = 0; i < indices.size(); i++) {
      indices_values[i] = indices[i];
    }

    indices_ = indices_values;
  }
}

void GLWidget::CreateBuffers() {
  makeCurrent();
  if (!vertex_buffer_.isCreated()) {
    vertex_buffer_.create();
    vertex_buffer_.bind();
    vertex_buffer_.setUsagePattern(QOpenGLBuffer::DynamicDraw);
    vertex_buffer_.allocate(
        vertices_,
        sizeof(double) * s21::Controller::Get()->GetNumberOfVertices() * 3);
  }
  void *vbo_ptr = vertex_buffer_.mapRange(
      0, sizeof(double) * s21::Controller::Get()->GetNumberOfVertices() * 3,
      QOpenGLBuffer::RangeWrite);

  if (vbo_ptr) {
    memcpy(vbo_ptr, vertices_,
           sizeof(double) * s21::Controller::Get()->GetNumberOfVertices() * 3);
    vertex_buffer_.unmap();
  }

  if (!index_buffer_.isCreated()) {
    index_buffer_.create();
    index_buffer_.bind();
    index_buffer_.allocate(
        indices_,
        sizeof(unsigned int) * s21::Controller::Get()->GetNumberOfLines());
  }

  if (!VAO_.isCreated()) VAO_.create();
  VAO_.bind();

  glEnableVertexAttribArray(0);
  glVertexAttribPointer(0, 3, GL_DOUBLE, GL_FALSE, 0, nullptr);

  if (vertices_) delete[] vertices_;
  vertices_ = nullptr;
}

void GLWidget::PaintBackground() {
  glClearColor(render_params_.background.redF(),
               render_params_.background.greenF(),
               render_params_.background.blueF(), 0);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

void GLWidget::DrawVertices() {
  if (!vertex_buffer_.isCreated()) return;
  vertex_buffer_.bind();

  glPointSize(render_params_.vertices_size);
  if (render_params_.vertices_type == kBlank) {
    return;
  } else if (render_params_.vertices_type == kCircle) {
    glEnable(GL_POINT_SMOOTH);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

  } else if (render_params_.vertices_type == kSquare) {
    glDisable(GL_POINT_SMOOTH);
  }
  shader_program_.setUniformValue("FragColor", render_params_.vertices_color);
  glDrawArrays(GL_POINTS, 0, s21::Controller::Get()->GetNumberOfVertices());
}

void GLWidget::DrawEdges() {
  if (!index_buffer_.isCreated()) return;
  index_buffer_.bind();
  if (render_params_.edges_type == kDashed) {
    glLineStipple(1, 0x00F0);
    glEnable(GL_LINE_STIPPLE);
  }
  if (render_params_.edges_type == kSolid) glDisable(GL_LINE_STIPPLE);

  shader_program_.setUniformValue("FragColor", render_params_.edges_color);
  glLineWidth(render_params_.line_width);
  glDrawElements(GL_LINES, s21::Controller::Get()->GetNumberOfLines(),
                 GL_UNSIGNED_INT, nullptr);
}

const QColor &GLWidget::GetBackground() const noexcept {
  return render_params_.background;
}

const GLfloat &GLWidget::GetWidth() const noexcept {
  return render_params_.line_width;
}

const GLWidget::EdgesType &GLWidget::GetEdgesType() const noexcept {
  return render_params_.edges_type;
}

const QColor &GLWidget::GetEdgesColor() const noexcept {
  return render_params_.edges_color;
}

const GLWidget::VerticesType &GLWidget::GetVerticesType() const noexcept {
  return render_params_.vertices_type;
}

const GLfloat &GLWidget::GetVerticesSize() const noexcept {
  return render_params_.vertices_size;
}

const QColor &GLWidget::GetVerticesColor() const noexcept {
  return render_params_.vertices_color;
}

const GLWidget::ProjectionType &GLWidget::GetProjectionType() const noexcept {
  return render_params_.projection_type;
}

void GLWidget::SetBackground(const QColor &color) {
  render_params_.background = color;
  update();
}

void GLWidget::SetVerticesSize(int value) {
  render_params_.vertices_size = value;
  update();
}

void GLWidget::SetVerticesColor(const QColor &new_color) {
  render_params_.vertices_color = new_color;
  update();
}

void GLWidget::SetEdgesColor(const QColor &new_color) {
  render_params_.edges_color = new_color;
  update();
}

void GLWidget::SetVerticesType(int value) {
  render_params_.vertices_type = VerticesType(value);
  update();
}

void GLWidget::SetEdgesType(int value) {
  render_params_.edges_type = EdgesType(value);
  update();
}

void GLWidget::SetLineWidth(int value) {
  render_params_.line_width = value;
  update();
}

void GLWidget::SetProjectionType(int type) {
  render_params_.projection_type = ProjectionType(type);
  update();
}

void GLWidget::SetScale(int size) {
  s21::Controller::Get()->Scale(size);

  SetObjectGeometry();
  update();
}

void GLWidget::SetPositionX(int value) {
  s21::Controller::Get()->Translate(value, 0, 0);
  SetObjectGeometry();
  update();
}
void GLWidget::SetPositionY(int value) {
  s21::Controller::Get()->Translate(0, value, 0);
  SetObjectGeometry();
  update();
}
void GLWidget::SetPositionZ(int value) {
  s21::Controller::Get()->Translate(0, 0, value);
  SetObjectGeometry();
  update();
}
void GLWidget::RotationX(int value) {
  s21::Controller::Get()->Rotate(value, 0, 0);
  SetObjectGeometry();
  update();
}
void GLWidget::RotationY(int value) {
  s21::Controller::Get()->Rotate(0, value, 0);
  SetObjectGeometry();
  update();
}
void GLWidget::RotationZ(int value) {
  s21::Controller::Get()->Rotate(0, 0, value);
  SetObjectGeometry();
  update();
}

GLWidget::~GLWidget() {
  makeCurrent();
  Clear();
  doneCurrent();
}

}  // namespace s21
