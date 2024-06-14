#include "s21_loader.h"

namespace s21 {

int Loader::Loading(const std::string& filename) {
  int err = 0;

  // очищаем векторы и счетчики
  Clearing();

  // при err = 2 ошибка открытия файла
  std::ifstream file(filename);
  if (!file.is_open()) {
    err = 2;
    return err;
  }

  // заполняем vertex и polygon
  err = Parsing(file);
  Normalize();

  // если была ошибка, очищаем все
  if (err != 0) {
    Clearing();
  }

  file.close();

  return err;
}

void Loader::Clearing() {
  vector_v_.clear();
  vector_f_.clear();
  count_vertices_ = 0;
  count_polygons_ = 0;
  value_max_ = -1;
}

int Loader::Parsing(std::ifstream& file) {
  int err = 0;
  // int i = 0;

  // парсим построково
  std::string line;

  while (std::getline(file, line)) {
    // если строка [v_0_0_] < 5, то неккоректная строка, парсим дальше
    if (line.length() < 5) {
      continue;
    }
    // найдем 'v_', проверим на символы и запарсим
    if (line[0] == 'v' && line[1] == ' ') {
      // если нет лишних символов, то парсим строку
      if (IsValidString(line) && !IsEmptyStr(line)) {
        SetVertices(line);
      }
      // найдем 'f_', проверим на символы и запарсим
    } else if (line[0] == 'f' && line[1] == ' ') {
      if (IsValidString(line) && !IsEmptyStr(line)) {
        SetPolygons(line);
      }
    }
  }

  // проверяем, есть ли корректные строки в файле
  if (count_vertices_ == 0 || count_polygons_ == 0) {
    err = 1;
  }
  return err;
}

int Loader::IsEmptyStr(std::string line) {
  int res = 1;
  int i = 0;
  char ch;
  // проверяем, что наша строка содержит числа
  while ((ch = line[i]) && (ch != '\0' && ch != '\n')) {
    if ((strchr("1234567890", ch))) {
      res = 0;
      break;
    }
    i++;
  }
  return res;
}

int Loader::IsValidString(std::string line) {
  // проверим разрешенные символы
  int res = 1;
  int i = 1;
  char ch;

  // начинаем проверять строку без 'v_' вначале
  if (line[0] == 'v') {
    while ((ch = line[i]) && (ch != '\0' && ch != '\n')) {
      if (!(strchr("+-1234567890. \r", ch))) {
        res = 0;
        break;
      }
      i++;
    }
    // начинаем проверять строку без 'f_' вначале
  } else if (line[0] == 'f') {
    while ((ch = line[i]) && (ch != '\0' && ch != '\n')) {
      if (!(strchr("1234567890 /\r", ch))) {
        res = 0;
        break;
      }
      i++;
    }
  }

  return res;
}

void Loader::SetVertices(std::string line) {
  // парс строки типа 'v 1 2 3'
  int success = 0;
  double x = 0, y = 0, z = 0;

  std::stringstream iss(line);
  char ch;
  if (iss >> ch >> x >> y >> z) {
    success = 1;
  } else {
    success = 0;
  }

  // если считались: x  y  z
  if (success == 1) {
    // вставляем в конец вектора end(), значения xyz
    vector_v_.insert(vector_v_.end(), {x, y, z});
    if (std::abs(x) > value_max_) {
      value_max_ = std::abs(x);
    }
    if (std::abs(y) > value_max_) {
      value_max_ = std::abs(y);
    }
    if (std::abs(z) > value_max_) {
      value_max_ = std::abs(z);
    }
    // и считаем кол-во, успешно записанных векторов
    count_vertices_++;
  }
}

void Loader::SetPolygons(std::string line) {
  // парс строки типа 'f 1 2 3' -> 'f 12 23 31'
  std::stringstream ss(line);
  std::string tmp;
  int success = 0;  // успех считывания номера вершины
  int count_success = 0;  // кол-во успехов считывания
  int num = 0;            // номер вершины
  int first_num = 0;  // первый номер вершины в полигоне
  int first_flag = 1;  // флаг для первой вершины в строке

  // делим строку line на значения в tmp
  while (std::getline(ss, tmp, ' ')) {
    // считываем значение в tmp, ищем число
    success = sscanf(tmp.c_str(), "%d", &num);
    if (success == 1) {
      count_success = count_success + success;
    }

    // если не считалось число, то парсим дальше (скипаем f вначале)
    if (success != 1) {
      continue;
    }
    // если полигон отрицательный
    if (num < 1) {
      continue;
    }

    // самый первый номер вершины в полигоне
    if (first_flag == 1) {
      first_flag = 0;
      first_num = num - 1;
      vector_f_.push_back(num - 1);
    } else {
      // остальные номера вершин записываем с повтором
      vector_f_.insert(vector_f_.end(), {num - 1, num - 1});
    }
  }
  // в конце полигона закольцовываем и считаем +1 полигон
  vector_f_.push_back(first_num);
  count_polygons_++;

  // если полигон не полный 'f 1 2', то убираем неправильную строку
  if (count_success < 2) {
    while (count_success != 0) {
      vector_f_.pop_back();
      vector_f_.pop_back();
      count_success--;
    }
    count_polygons_--;
  }
}

std::vector<double>& Loader::GetVectorV() { return vector_v_; }
std::vector<int>& Loader::GetVectorF() { return vector_f_; }

int Loader::GetCountVertices() { return count_vertices_; }
int Loader::GetCountPolygons() { return count_polygons_; }

void Loader::Normalize() {
  // приведем координаты к диапозону = -1..1
  if (value_max_ > 1) {
    for (double& value : vector_v_) {
      value = value / value_max_;
    }
  }
}

}  // namespace s21
