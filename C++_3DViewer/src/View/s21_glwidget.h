#ifndef _3DVIEWER_V2_VIEW_GLWIDGET_H
#define _3DVIEWER_V2_VIEW_GLWIDGET_H

#define GL_SILENCE_DEPRECATION

#include <QMatrix4x4>
#include <QOpenGLBuffer>
#include <QOpenGLContext>
#include <QOpenGLFunctions>
#include <QOpenGLShaderProgram>
#include <QOpenGLVertexArrayObject>
#include <QOpenGLWidget>

#include "../Controller/s21_controller.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class GLWidget;
}
QT_END_NAMESPACE

namespace s21 {
class GLWidget : public QOpenGLWidget, protected QOpenGLFunctions {
  Q_OBJECT

 public:
  using QOpenGLWidget::QOpenGLWidget;
  GLWidget(QWidget *parent);
  ~GLWidget();

  enum VerticesType { kSquare, kCircle, kBlank };
  enum EdgesType { kSolid, kDashed };
  enum ProjectionType { kParallel, kCentral };

  struct RenderParams {
    QColor background;
    QColor vertices_color;
    GLfloat line_width;
    GLfloat vertices_size;
    QColor edges_color;
    EdgesType edges_type;
    VerticesType vertices_type;
    ProjectionType projection_type;
  };

  const QColor &GetBackground() const noexcept;
  const GLfloat &GetWidth() const noexcept;
  const EdgesType &GetEdgesType() const noexcept;
  const QColor &GetEdgesColor() const noexcept;
  const VerticesType &GetVerticesType() const noexcept;
  const GLfloat &GetVerticesSize() const noexcept;
  const QColor &GetVerticesColor() const noexcept;
  const ProjectionType &GetProjectionType() const noexcept;

  void SetBackground(const QColor &color);
  void SetVerticesColor(const QColor &new_vertices_color);
  void SetEdgesColor(const QColor &new_vertices_color);

  void SetObjectGeometry();
  void Clear();

 public slots:
  void SetVerticesSize(int value);
  void SetVerticesType(int value);
  void SetEdgesType(int value);
  void SetLineWidth(int value);
  void SetProjectionType(int type);
  void SetPositionX(int value);
  void SetPositionY(int value);
  void SetPositionZ(int value);
  void RotationX(int value);
  void RotationY(int value);
  void RotationZ(int value);
  void SetScale(int value);

 protected:
  void initializeGL() override;
  void resizeGL(int w, int h) override;
  void paintGL() override;

  void InitShaders();
  void PaintBackground();
  void SetupObject();
  void SetUpMVP();
  void LoadObjectGeometry();
  void CreateBuffers();
  void DrawVertices();
  void DrawEdges();

 private:
  Ui::GLWidget *ui_;
  double *vertices_ = nullptr;
  unsigned int *indices_ = nullptr;
  QOpenGLShaderProgram shader_program_;
  QMatrix4x4 projection_;
  QOpenGLVertexArrayObject VAO_;
  QOpenGLBuffer vertex_buffer_ = QOpenGLBuffer(QOpenGLBuffer::VertexBuffer);
  QOpenGLBuffer index_buffer_ = QOpenGLBuffer(QOpenGLBuffer::IndexBuffer);
  RenderParams render_params_;
};

}  // namespace s21
#endif  // _3DVIEWER_V2_VIEW_GLWIDGET_H
