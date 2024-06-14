#include <QApplication>
#include <QCoreApplication>

#include "../Controller/s21_controller.h"
#include "View/s21_mainwindow.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  QCoreApplication::setOrganizationName("S21");
  QCoreApplication::setApplicationName("3DViewer_v2");

  /**
   * @brief Ensures that Controller has only one instance and provides global
   * access to it.
   * @note It should be defined before using. That's why we define it in entry
   * point of App.
   * @warning Adding [[maybe_unused]] suppresses the warning for the compiler by
   * -Werror.
   */
  [[maybe_unused]] s21::Controller *controller = s21::Controller::Get();

  s21::MainWindow w;
  w.setWindowTitle("3D Viewer");
  w.show();
  return a.exec();
}
