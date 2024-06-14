#ifndef _3DVIEWER_V2_MODEL_TRANSFORMATIONS_H_
#define _3DVIEWER_V2_MODEL_TRANSFORMATIONS_H_

#include <cmath>

#include "s21_model.h"

namespace s21 {

class Transformation {
 public:
  Transformation() {}
  ~Transformation() {}

  void move_x(std::vector<double>* vector_v_, double value) {
    value = value / 100;
    double del_x = value - value_move_x_prev_;
    for (auto it = (*vector_v_).begin(); it < (*vector_v_).end(); it += 3) {
      *it = *it + del_x;
    }
    value_move_x_prev_ = value;
  }

  void move_y(std::vector<double>* vector_v_, double value) {
    value = value / 100;
    double del_y = value - value_move_y_prev_;
    for (auto it = (*vector_v_).begin() + 1; it < (*vector_v_).end(); it += 3) {
      *it = *it + del_y;
    }
    value_move_y_prev_ = value;
  }

  void move_z(std::vector<double>* vector_v_, double value) {
    value = value / 100;
    double del_z = value - value_move_z_prev_;
    for (auto it = (*vector_v_).begin() + 2; it < (*vector_v_).end(); it += 3) {
      *it = *it + del_z;
    }
    value_move_z_prev_ = value;
  }

  double convert_degrees_to_radians(double degree) {
    return degree * M_PI / 180;
  }

  void rotate_x(std::vector<double>* vector_v_, double value) {
    double del_x = value - value_rotate_x_prev_;
    double radians = convert_degrees_to_radians(del_x);
    double tmp_y = 0;
    double tmp_z = 0;
    for (auto it = (*vector_v_).begin(); it != (*vector_v_).end();
         it = it + 3) {
      tmp_y = *(it + 1);  // сохраняем коорд y
      tmp_z = *(it + 2);  // сохраняем коорд z
      *(it + 1) =
          tmp_y * cos(radians) + tmp_z * sin(radians);  // изменяем коорд y
      *(it + 2) =
          -tmp_y * sin(radians) + tmp_z * cos(radians);  // изменяем коорд z
    }
    value_rotate_x_prev_ = value;
  }

  void rotate_y(std::vector<double>* vector_v_, double value) {
    double del_y = value - value_rotate_y_prev_;
    double radians = convert_degrees_to_radians(del_y);
    double tmp_x = 0;
    double tmp_z = 0;
    for (auto it = (*vector_v_).begin(); it != (*vector_v_).end();
         it = it + 3) {
      tmp_x = *it;        // сохраняем коорд x
      tmp_z = *(it + 2);  // сохраняем коорд z
      *(it) = tmp_x * cos(radians) + tmp_z * sin(radians);  // изменяем коорд x
      *(it + 2) =
          -tmp_x * sin(radians) + tmp_z * cos(radians);  // изменяем коорд z
    }
    value_rotate_y_prev_ = value;
  }

  void rotate_z(std::vector<double>* vector_v_, double value) {
    double del_z = value - value_rotate_z_prev_;
    double radians = convert_degrees_to_radians(del_z);
    double tmp_x = 0;
    double tmp_y = 0;
    for (auto it = (*vector_v_).begin(); it != (*vector_v_).end();
         it = it + 3) {
      tmp_x = *(it);      // сохраняем коорд x
      tmp_y = *(it + 1);  // сохраняем коорд y
      *(it) = tmp_x * cos(radians) - tmp_y * sin(radians);
      *(it + 1) = tmp_x * sin(radians) + tmp_y * cos(radians);
    }
    value_rotate_z_prev_ = value;
  }

  void scale(std::vector<double>* vector_v_, double value) {
    // если изменение = 0
    if (fabs(value) < 10e-7) {
      return;
    }

    // делаем вектор без масштаба
    if (mul_pos_ == 1) {
      for (auto it = (*vector_v_).begin(); it < (*vector_v_).end(); it++) {
        *it = *it / mul_;
      }
    } else {
      for (auto it = (*vector_v_).begin(); it < (*vector_v_).end(); it++) {
        *it = *it * (-1 * mul_);
      }
    }
    mul_ = value;

    // определяем знак scale +/-
    if (mul_ < 0) {
      mul_pos_ = 0;
    } else {
      mul_pos_ = 1;
    }

    // изменяем мастаб вектора
    if (mul_pos_ == 1) {
      for (auto it = (*vector_v_).begin(); it < (*vector_v_).end(); it++) {
        *it = *it * mul_;
      }
    } else {
      for (auto it = (*vector_v_).begin(); it < (*vector_v_).end(); it++) {
        *it = *it / (-1 * mul_);
      }
    }
  }

 private:
  double value_move_x_prev_ = 0, value_move_y_prev_ = 0, value_move_z_prev_ = 0;
  double value_rotate_x_prev_ = 0, value_rotate_y_prev_ = 0,
         value_rotate_z_prev_ = 0;
  double mul_ = 1, mul_pos_ = 1;
};

}  // namespace s21
#endif  // _3DVIEWER_V2_MODEL_TRANSFORMATIONS_H_
