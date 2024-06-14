#include <QSettings>
#include <QVariant>

#include "s21_glwidget.h"
#include "s21_mainwindow.h"
#include "ui_s21_mainwindow.h"

namespace s21 {

void MainWindow::SaveSettings() {
  app_settings_->setValue("background", gl_->GetBackground());
  app_settings_->setValue("width", gl_->GetWidth());
  app_settings_->setValue("edges_t", gl_->GetEdgesType());
  app_settings_->setValue("edges_color", gl_->GetEdgesColor());
  app_settings_->setValue("vetr_method", gl_->GetVerticesType());
  app_settings_->setValue("vertices_size", gl_->GetVerticesSize());
  app_settings_->setValue("vertices_color", gl_->GetVerticesColor());
  app_settings_->setValue("projection_type", gl_->GetProjectionType());
}

void MainWindow::LoadSettings() {
  QVariant background = app_settings_->value("background");
  QVariant width = app_settings_->value("width");
  QVariant edges_t = app_settings_->value("edges_t");
  QVariant edges_color = app_settings_->value("edges_color");
  QVariant vertices_type = app_settings_->value("vetr_method");
  QVariant vertices_size = app_settings_->value("vertices_size");
  QVariant vertices_color = app_settings_->value("vertices_color");
  QVariant projection_type = app_settings_->value("projection_type");

  if (background.isValid()) {
    gl_->SetBackground(background.value<QColor>());
  }
  if (width.isValid()) {
    gl_->SetLineWidth(width.value<float>());
    ui_->edges_size_slider->setValue(width.value<float>());
  }
  if (edges_t.isValid()) {
    gl_->SetEdgesType(edges_t.value<int>());
    ui_->edges_type_comboBox->setCurrentIndex(edges_t.value<int>());
  }
  if (edges_color.isValid()) {
    gl_->SetEdgesColor(edges_color.value<QColor>());
  }
  if (vertices_type.isValid()) {
    gl_->SetVerticesType(vertices_type.value<int>());
    ui_->vertices_type_comboBox->setCurrentIndex(vertices_type.value<int>());
  }
  if (vertices_size.isValid()) {
    gl_->SetVerticesSize(vertices_size.value<float>());
    ui_->vertices_size_slider->setValue(vertices_size.value<float>());
  }
  if (vertices_color.isValid()) {
    gl_->SetVerticesColor(vertices_color.value<QColor>());
  }
  if (projection_type.isValid()) {
    gl_->SetProjectionType(projection_type.value<int>());
    ui_->projection_type_comboBox->setCurrentIndex(
        projection_type.value<int>());
  }
}

void MainWindow::ResetSettings() {
  gl_->SetBackground(QColor(Qt::black));
  gl_->SetLineWidth(1);
  ui_->edges_size_slider->setValue(0);
  gl_->SetEdgesType(0);
  ui_->edges_type_comboBox->setCurrentIndex(0);
  gl_->SetEdgesColor(QColor(Qt::white));
  gl_->SetVerticesType(1);
  ui_->vertices_type_comboBox->setCurrentIndex(1);
  gl_->SetVerticesSize(0);
  ui_->vertices_size_slider->setValue(0);
  gl_->SetVerticesColor(QColor(Qt::white));
  gl_->SetProjectionType(1);
  gl_->update();
}

}  // namespace s21
