#ifndef _3DVIEWER_V2_VIEW_MAINWINDOW_H
#define _3DVIEWER_V2_VIEW_MAINWINDOW_H

#include <QColor>
#include <QMainWindow>
#include <QSettings>

#include "s21_capturestrategy.h"
#include "s21_glwidget.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

namespace s21 {

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

 private slots:
  void x_rotation_qslider_ValueChanged(int value);
  void y_rotation_qslider_ValueChanged(int value);
  void z_rotation_qslider_ValueChanged(int value);
  void x_position_qslider_ValueChanged(int value);
  void y_position_qslider_ValueChanged(int value);
  void z_position_qslider_ValueChanged(int value);
  void on_load_file_button_clicked();
  void on_screenshot_button_clicked();
  void on_record_gif_button_clicked();
  void on_background_color_button_clicked();
  void on_vertices_color_button_clicked();
  void on_edges_color_button_clicked();

 public slots:
  void ResetSettings();

 private:
  bool IsModelLoaded();
  void ResetGui();
  void UpdateUIModelInfo();
  bool IsValidFile(const QString &path);
  void SaveSettings();
  void LoadSettings();

  Ui::MainWindow *ui_;
  GLWidget *gl_;
  CaptureContext *capture_;
  QSettings *app_settings_;
  QString model_path_;
};

}  // namespace s21
#endif  // _3DVIEWER_V2_VIEW_MAINWINDOW_H
