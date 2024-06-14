#include <gtest/gtest.h>

#include "../Model/s21_model.h"

namespace {

s21::Model model;

TEST(loading, cube) {
  int err = model.LoadingModel("Samples/cube.obj");
  std::vector<double> my_vector_v = model.GetVectorV();
  std::vector<int> my_vector_f = model.GetVectorF();
  std::vector<double> orig_vector_v = {
      0.000000, 1.000000, 1.000000, 0.000000, 0.000000, 1.000000,
      1.000000, 0.000000, 1.000000, 1.000000, 1.000000, 1.000000,
      0.000000, 1.000000, 0.000000, 0.000000, 0.000000, 0.000000,
      1.000000, 0.000000, 0.000000, 1.000000, 1.000000, 0.000000};
  std::vector<int> orig_vector_f = {
      0, 1, 1, 2, 2, 3, 3, 0, 7, 6, 6, 5, 5, 4, 4, 7, 3, 2, 2, 6, 6, 7, 7, 3,
      4, 0, 0, 3, 3, 7, 7, 4, 4, 5, 5, 1, 1, 0, 0, 4, 1, 5, 5, 6, 6, 2, 2, 1};
  for (size_t i = 0; i < orig_vector_v.size(); ++i) {
    EXPECT_NEAR(my_vector_v[i], orig_vector_v[i], 1e-6);
  }
  for (size_t i = 0; i < orig_vector_f.size(); ++i) {
    EXPECT_NEAR(my_vector_f[i], orig_vector_f[i], 1e-6);
  }
  ASSERT_EQ(err, 0);
  ASSERT_EQ(model.GetCountVertices(), 8);
  ASSERT_EQ(model.GetCountPolygons(), 6);
}

TEST(loading, nofile) {
  s21::Model model;
  int err = model.LoadingModel("no_file.obj");
  ASSERT_EQ(err, 2);
}

TEST(loading, proverka) {
  s21::Model model;
  int err = model.LoadingModel("Samples/proverka.obj");
  std::vector<double> my_vector_v = model.GetVectorV();
  std::vector<int> my_vector_f = model.GetVectorF();
  std::vector<double> orig_vector_v = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6};
  std::vector<int> orig_vector_f = {0, 1, 1, 2, 2, 0, 3, 4, 4, 5, 5, 3};
  for (size_t i = 0; i < orig_vector_v.size(); ++i) {
    EXPECT_NEAR(my_vector_v[i], orig_vector_v[i], 1e-6);
  }
  for (size_t i = 0; i < orig_vector_f.size(); ++i) {
    EXPECT_NEAR(my_vector_f[i], orig_vector_f[i], 1e-6);
  }
  ASSERT_EQ(err, 0);
  ASSERT_EQ(model.GetCountVertices(), 2);
  ASSERT_EQ(model.GetCountPolygons(), 2);
}

TEST(scale, plus0) {
  s21::Model model;
  int err = model.LoadingModel("Samples/proverka.obj");
  std::vector<double> my_vector_v = model.GetVectorV();
  model.Transformation("scale", "0", 0);
  my_vector_v = model.GetVectorV();
  std::vector<double> orig_vector_v = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6};
  for (size_t i = 0; i < orig_vector_v.size(); ++i) {
    EXPECT_NEAR(my_vector_v[i], orig_vector_v[i], 1e-6);
  }
  ASSERT_EQ(err, 0);
  ASSERT_EQ(model.GetCountVertices(), 2);
}

TEST(scale, plus1) {
  s21::Model model;
  int err = model.LoadingModel("Samples/proverka.obj");
  std::vector<double> my_vector_v = model.GetVectorV();
  model.Transformation("scale", "0", 1);
  my_vector_v = model.GetVectorV();
  std::vector<double> orig_vector_v = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6};
  for (size_t i = 0; i < orig_vector_v.size(); ++i) {
    EXPECT_NEAR(my_vector_v[i], orig_vector_v[i], 1e-6);
  }
  ASSERT_EQ(err, 0);
  ASSERT_EQ(model.GetCountVertices(), 2);
}

TEST(scale, plus2) {
  s21::Model model;
  int err = model.LoadingModel("Samples/proverka.obj");
  std::vector<double> my_vector_v = model.GetVectorV();
  model.Transformation("scale", "0", 2);
  my_vector_v = model.GetVectorV();
  std::vector<double> orig_vector_v = {0.2, 0.4, 0.6, 0.8, 1.0, 1.2};
  for (size_t i = 0; i < orig_vector_v.size(); ++i) {
    EXPECT_NEAR(my_vector_v[i], orig_vector_v[i], 1e-6);
  }
  ASSERT_EQ(err, 0);
  ASSERT_EQ(model.GetCountVertices(), 2);
}

TEST(scale, minus1) {
  s21::Model model;
  int err = model.LoadingModel("Samples/proverka.obj");
  std::vector<double> my_vector_v = model.GetVectorV();
  model.Transformation("scale", "0", 2);
  my_vector_v = model.GetVectorV();
  model.Transformation("scale", "0", 1);
  my_vector_v = model.GetVectorV();
  std::vector<double> orig_vector_v = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6};
  for (size_t i = 0; i < orig_vector_v.size(); ++i) {
    EXPECT_NEAR(my_vector_v[i], orig_vector_v[i], 1e-6);
  }
  ASSERT_EQ(err, 0);
  ASSERT_EQ(model.GetCountVertices(), 2);
}

TEST(scale, minus2) {
  s21::Model model;
  int err = model.LoadingModel("Samples/proverka.obj");
  std::vector<double> my_vector_v = model.GetVectorV();
  model.Transformation("scale", "0", 0);
  my_vector_v = model.GetVectorV();
  model.Transformation("scale", "0", -2);
  my_vector_v = model.GetVectorV();
  std::vector<double> orig_vector_v = {0.1 / 2, 0.2 / 2, 0.3 / 2,
                                       0.4 / 2, 0.5 / 2, 0.6 / 2};
  for (size_t i = 0; i < orig_vector_v.size(); ++i) {
    EXPECT_NEAR(my_vector_v[i], orig_vector_v[i], 1e-6);
  }
  ASSERT_EQ(err, 0);
  ASSERT_EQ(model.GetCountVertices(), 2);
}

TEST(scale, minus3) {
  s21::Model model;
  int err = model.LoadingModel("Samples/proverka.obj");
  std::vector<double> my_vector_v = model.GetVectorV();
  model.Transformation("scale", "0", 2);
  my_vector_v = model.GetVectorV();
  model.Transformation("scale", "0", -2);
  my_vector_v = model.GetVectorV();
  std::vector<double> orig_vector_v = {0.1 / 2, 0.2 / 2, 0.3 / 2,
                                       0.4 / 2, 0.5 / 2, 0.6 / 2};
  for (size_t i = 0; i < orig_vector_v.size(); ++i) {
    EXPECT_NEAR(my_vector_v[i], orig_vector_v[i], 1e-6);
  }
  ASSERT_EQ(err, 0);
  ASSERT_EQ(model.GetCountVertices(), 2);
}

TEST(move, x) {
  int err = model.LoadingModel("Samples/proverka.obj");
  std::vector<double> my_vector_v = model.GetVectorV();
  model.Transformation("move", "x", 100);
  my_vector_v = model.GetVectorV();
  std::vector<double> orig_vector_v = {1.1, 0.2, 0.3, 1.4, 0.5, 0.6};
  for (size_t i = 0; i < orig_vector_v.size(); ++i) {
    EXPECT_NEAR(my_vector_v[i], orig_vector_v[i], 1e-6);
  }
  ASSERT_EQ(err, 0);
  ASSERT_EQ(model.GetCountVertices(), 2);
}

TEST(move, y) {
  int err = model.LoadingModel("Samples/proverka.obj");
  std::vector<double> my_vector_v = model.GetVectorV();
  model.Transformation("move", "y", 100);
  my_vector_v = model.GetVectorV();
  std::vector<double> orig_vector_v = {0.1, 1.2, 0.3, 0.4, 1.5, 0.6};
  for (size_t i = 0; i < orig_vector_v.size(); ++i) {
    EXPECT_NEAR(my_vector_v[i], orig_vector_v[i], 1e-6);
  }
  ASSERT_EQ(err, 0);
  ASSERT_EQ(model.GetCountVertices(), 2);
}

TEST(move, z) {
  int err = model.LoadingModel("Samples/proverka.obj");
  std::vector<double> my_vector_v = model.GetVectorV();
  model.Transformation("move", "z", 100);
  my_vector_v = model.GetVectorV();
  std::vector<double> orig_vector_v = {0.1, 0.2, 1.3, 0.4, 0.5, 1.6};
  for (size_t i = 0; i < orig_vector_v.size(); ++i) {
    EXPECT_NEAR(my_vector_v[i], orig_vector_v[i], 1e-6);
  }
  ASSERT_EQ(err, 0);
  ASSERT_EQ(model.GetCountVertices(), 2);
}

TEST(rotate, x) {
  int err = model.LoadingModel("Samples/proverka.obj");
  std::vector<double> my_vector_v = model.GetVectorV();
  model.Transformation("rotate", "x", 2);
  my_vector_v = model.GetVectorV();
  std::vector<double> orig_vector_v = {0.1, 0.210348, 0.292837,
                                       0.4, 0.520635, 0.582185};
  for (size_t i = 0; i < orig_vector_v.size(); ++i) {
    EXPECT_NEAR(my_vector_v[i], orig_vector_v[i], 1e-3);
  }
  ASSERT_EQ(err, 0);
  ASSERT_EQ(model.GetCountVertices(), 2);
}

TEST(rotate, y) {
  int err = model.LoadingModel("Samples/proverka.obj");
  std::vector<double> my_vector_v = model.GetVectorV();
  model.Transformation("rotate", "y", 1);
  my_vector_v = model.GetVectorV();
  std::vector<double> orig_vector_v = {0.10522,  0.2, 0.298209,
                                       0.410411, 0.5, 0.592928};
  for (size_t i = 0; i < orig_vector_v.size(); ++i) {
    EXPECT_NEAR(my_vector_v[i], orig_vector_v[i], 1e-3);
  }
  ASSERT_EQ(err, 0);
  ASSERT_EQ(model.GetCountVertices(), 2);
}

TEST(rotate, z) {
  int err = model.LoadingModel("Samples/proverka.obj");
  std::vector<double> my_vector_v = model.GetVectorV();
  model.Transformation("rotate", "z", 2);
  my_vector_v = model.GetVectorV();
  std::vector<double> orig_vector_v = {0.0929592, 0.203368, 0.3,
                                       0.382307,  0.513655, 0.6};
  for (size_t i = 0; i < orig_vector_v.size(); ++i) {
    EXPECT_NEAR(my_vector_v[i], orig_vector_v[i], 1e-3);
  }
  ASSERT_EQ(err, 0);
  ASSERT_EQ(model.GetCountVertices(), 2);
}

}  // namespace