#ifndef _3DVIEWER_V2_MODEL_LOADER_H
#define _3DVIEWER_V2_MODEL_LOADER_H

#include <cstring>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

namespace s21 {

class Loader {
 public:
  Loader() {}
  ~Loader() {}

  int Loading(const std::string& filename);
  // геттеры
  std::vector<double>& GetVectorV();
  std::vector<int>& GetVectorF();
  int GetCountVertices();
  int GetCountPolygons();

 private:
  // вспомогательные функции
  void Clearing();
  int Parsing(std::ifstream& file);
  int IsEmptyStr(std::string line);
  int IsValidString(std::string line);
  void SetVertices(std::string line);
  void SetPolygons(std::string line);
  void Normalize();

  std::vector<double> vector_v_{};
  std::vector<int> vector_f_{};
  int count_vertices_ = 0;
  int count_polygons_ = 0;
  double value_max_ = -1;
};

}  // namespace s21
#endif  // _3DVIEWER_V2_MODEL_LOADER_H
