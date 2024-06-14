#include "s21_mainwindow.h"

#include <QColorDialog>
#include <QDir>
#include <QFileDialog>
#include <QMessageBox>
#include <QString>
#include <memory>

#include "../Controller/s21_controller.h"
#include "../third_party/QtGifImage/gifimage/qgifimage.h"
#include "./ui_s21_mainwindow.h"
#include "s21_capturestrategy.h"
#include "s21_glwidget.h"

namespace s21 {

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui_(new Ui::MainWindow),
      capture_(new s21::CaptureContext),
      app_settings_(new QSettings(parent))

{
  ui_->setupUi(this);
  gl_ = ui_->gl_widget;
  connect(ui_->reset_settings_button, SIGNAL(clicked()), this,
          SLOT(ResetSettings()));
  connect(ui_->x_rotation_qslider, SIGNAL(valueChanged(int)), gl_,
          SLOT(RotationX(int)));
  connect(ui_->y_rotation_qslider, SIGNAL(valueChanged(int)), gl_,
          SLOT(RotationY(int)));
  connect(ui_->z_rotation_qslider, SIGNAL(valueChanged(int)), gl_,
          SLOT(RotationZ(int)));
  connect(ui_->x_position_qslider, SIGNAL(valueChanged(int)), gl_,
          SLOT(SetPositionX(int)));
  connect(ui_->y_position_qslider, SIGNAL(valueChanged(int)), gl_,
          SLOT(SetPositionY(int)));
  connect(ui_->z_position_qslider, SIGNAL(valueChanged(int)), gl_,
          SLOT(SetPositionZ(int)));
  connect(ui_->edges_size_slider, SIGNAL(valueChanged(int)), gl_,
          SLOT(SetLineWidth(int)));
  connect(ui_->vertices_type_comboBox, SIGNAL(currentIndexChanged(int)), gl_,
          SLOT(SetVerticesType(int)));
  connect(ui_->edges_type_comboBox, SIGNAL(currentIndexChanged(int)), gl_,
          SLOT(SetEdgesType(int)));
  connect(ui_->projection_type_comboBox, SIGNAL(currentIndexChanged(int)), gl_,
          SLOT(SetProjectionType(int)));
  connect(ui_->vertices_size_slider, SIGNAL(valueChanged(int)), gl_,
          SLOT(SetVerticesSize(int)));
  connect(ui_->scale_qslider, SIGNAL(valueChanged(int)), gl_,
          SLOT(SetScale(int)));

  connect(ui_->x_rotation_qslider, &QSlider::valueChanged, this,
          &MainWindow::x_rotation_qslider_ValueChanged);
  connect(ui_->y_rotation_qslider, &QSlider::valueChanged, this,
          &MainWindow::y_rotation_qslider_ValueChanged);
  connect(ui_->z_rotation_qslider, &QSlider::valueChanged, this,
          &MainWindow::z_rotation_qslider_ValueChanged);
  connect(ui_->x_position_qslider, &QSlider::valueChanged, this,
          &MainWindow::x_position_qslider_ValueChanged);
  connect(ui_->y_position_qslider, &QSlider::valueChanged, this,
          &MainWindow::y_position_qslider_ValueChanged);
  connect(ui_->z_position_qslider, &QSlider::valueChanged, this,
          &MainWindow::z_position_qslider_ValueChanged);

  LoadSettings();
}

MainWindow::~MainWindow() {
  SaveSettings();
  delete capture_;
  delete app_settings_;
  delete ui_;
}

void MainWindow::on_load_file_button_clicked() {
  QString path =
      QFileDialog::getOpenFileName(this, "Load a file", QDir::currentPath());
  if (path.isEmpty() || !IsValidFile(path)) return;
  s21::Controller::Get()->ProcessModel(path);
  UpdateUIModelInfo();
  gl_->Clear();
  gl_->SetObjectGeometry();

  gl_->update();
}

void MainWindow::ResetGui() {
  ui_->x_rotation_qslider->setValue(0);
  ui_->y_rotation_qslider->setValue(0);
  ui_->z_rotation_qslider->setValue(0);
  ui_->x_position_qslider->setValue(0);
  ui_->y_position_qslider->setValue(0);
  ui_->z_position_qslider->setValue(0);
  ui_->scale_qslider->setValue(0);
}

bool MainWindow::IsValidFile(const QString &path) {
  QFileInfo fileInfo(path);
  if (fileInfo.suffix() != "obj") {
    QMessageBox::warning(this, "Warning!",
                         "Invalid file extension. Expected '.obj'");
    return false;
  }
  model_path_ = fileInfo.fileName();
  return true;
}

void MainWindow::UpdateUIModelInfo() {
  ResetGui();
  if (s21::Controller::Get()->GetStatus() != 0) {
    ui_->status_label->setText("Fail");
    ui_->status_label->setStyleSheet("color: red;");
  } else {
    ui_->status_label->setText("Success");
    ui_->status_label->setStyleSheet("color: rgb(220, 138, 221);");
    QString new_label = model_path_;
    if (model_path_.length() > 17) {
      new_label = model_path_.left(16) + "...";
    }
    ui_->filename_label->setText(new_label);
    ui_->filename_label->setToolTip(model_path_);
    ui_->filename_label->setStyleSheet(
        "QToolTip { color: black; background-color: white; }");
    ui_->edges_count_label->setText(
        QString::number(s21::Controller::Get()->GetNumberOfEdges()));
    ui_->edges_count_label->setStyleSheet(
        "QToolTip { color: black; background-color: white; }");
    ui_->vertices_count_label->setText(
        QString::number(s21::Controller::Get()->GetNumberOfVertices()));
    ui_->vertices_count_label->setStyleSheet(
        "QToolTip { color: black; background-color: white; }");
  }
}

void MainWindow::on_screenshot_button_clicked() {
  if (!IsModelLoaded()) return;
  capture_->SetStrategy(std::make_unique<ScreenshotCaptureStrategy>(gl_));
  capture_->PerformCapture();
}

void MainWindow::on_record_gif_button_clicked() {
  if (!IsModelLoaded()) return;
  capture_->SetStrategy(std::make_unique<GifCaptureStrategy>(gl_));
  capture_->PerformCapture();
}

bool MainWindow::IsModelLoaded() {
  if (model_path_.isEmpty()) {
    QMessageBox::warning(this, "Warning!", "File not uploaded");
    return false;
  }
  return true;
}

void MainWindow::on_background_color_button_clicked() {
  QColor new_bg = QColorDialog::getColor(gl_->GetBackground(), this,
                                         tr("Background Color:"));
  gl_->SetBackground(new_bg);
}

void MainWindow::on_vertices_color_button_clicked() {
  QColor new_color = QColorDialog::getColor(gl_->GetVerticesColor(), this,
                                            tr("Vertices Color:"));
  gl_->SetVerticesColor(new_color);
}

void MainWindow::on_edges_color_button_clicked() {
  QColor new_color =
      QColorDialog::getColor(gl_->GetEdgesColor(), this, tr("Edges Color:"));
  gl_->SetEdgesColor(new_color);
}

void MainWindow::x_rotation_qslider_ValueChanged(int value) {
  ui_->x_value_rotation_label->setText(QString::number(value));
}

void MainWindow::y_rotation_qslider_ValueChanged(int value) {
  ui_->y_value_rotation_label->setText(QString::number(value));
}

void MainWindow::z_rotation_qslider_ValueChanged(int value) {
  ui_->z_value_rotation_label->setText(QString::number(value));
}

void MainWindow::x_position_qslider_ValueChanged(int value) {
  ui_->x_value_position_label->setText(QString::number(value));
}

void MainWindow::y_position_qslider_ValueChanged(int value) {
  ui_->y_value_position_label->setText(QString::number(value));
}

void MainWindow::z_position_qslider_ValueChanged(int value) {
  ui_->z_value_position_label->setText(QString::number(value));
}

}  // namespace s21
