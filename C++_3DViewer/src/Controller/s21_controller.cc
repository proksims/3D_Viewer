#include "s21_controller.h"

#include <QString>

#include "../Model/s21_model.h"

namespace s21 {
Controller *Controller::instance_ = nullptr;

Controller::Controller() { model_ = new Model(); }

Controller::~Controller() { delete model_; }

Controller *Controller::Get() {
  if (instance_ == nullptr) instance_ = new Controller;
  return instance_;
}

void Controller::ProcessModel(QString path) {
  is_object_loaded_ = model_->LoadingModel(path.toStdString());
}

std::vector<double> &Controller::GetVertices() { return model_->GetVectorV(); }
std::vector<int> &Controller::GetIndices() { return model_->GetVectorF(); }
int Controller::GetNumberOfVertices() { return model_->GetCountVertices(); }
int Controller::GetNumberOfEdges() {
  int count_polygons = model_->GetCountPolygons();
  int count_vertices = model_->GetCountVertices();
  return count_polygons + count_vertices - 2;
}

int Controller::GetNumberOfLines() { return model_->GetCountLines(); }

int Controller::GetStatus() { return is_object_loaded_; }

void Controller::Scale(int size) {
  model_->Transformation("scale", "0", (double)size);
}

void Controller::Translate(double x, double y, double z) {
  if (x != 0) model_->Transformation("move", "x", x);
  if (y != 0) model_->Transformation("move", "y", y);
  if (z != 0) model_->Transformation("move", "z", z);
}

void Controller::Rotate(double x, double y, double z) {
  if (x != 0) model_->Transformation("rotate", "x", x);
  if (y != 0) model_->Transformation("rotate", "y", y);
  if (z != 0) model_->Transformation("rotate", "z", z);
}

}  // namespace s21
