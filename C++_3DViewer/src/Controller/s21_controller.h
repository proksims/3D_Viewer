/** @file s21_controller.h
 *
 * @brief This file contains the implementation of the Controller class,
 * which is designed as a Singleton object.
 *
 */

#ifndef _3DVIEWER_V2_CONTROLLER_CONTROLLER_H
#define _3DVIEWER_V2_CONTROLLER_CONTROLLER_H

#include <QString>

#include "../Model/s21_model.h"

namespace s21 {
/** @class Controller
 *
 *  @brief The Controller class manages the application's logic and serves as
 * the global access point.
 */

class Controller {
 public:
  Controller(Controller const &other) = delete;  /// Should't be cloned.
  void operator=(const Controller &) = delete;   /// Should't be assignable.
  ~Controller();

  static Controller *Get();

  void ProcessModel(QString path);
  std::vector<double> &GetVertices();
  std::vector<int> &GetIndices();
  int GetNumberOfVertices();
  int GetNumberOfEdges();
  int GetNumberOfLines();
  int GetStatus();
  void Scale(int size);
  void Translate(double x, double y, double z);
  void Rotate(double x, double y, double z);

 protected:
  Controller();

 private:
  static Controller *instance_;
  Model *model_;
  int is_object_loaded_;
};

}  // namespace s21
#endif  // _3DVIEWER_V2_CONTROLLER_CONTROLLER_H
