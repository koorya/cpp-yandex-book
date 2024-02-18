#include "../Transpose.h"

#include <gtest/gtest.h>

#include <vector>

TEST(Transpose, test_can_run) { EXPECT_EQ(1, 1); }

TEST(Transpose, one_x_one) {
  auto input = std::vector<std::vector<int>>(1, std::vector<int>(1, 1));

  EXPECT_EQ(Transpose(input), input);
}

TEST(Transpose, one_x_two) {
  auto input = std::vector<std::vector<int>>(1, std::vector<int>(2, 1));
  auto transposed = std::vector<std::vector<int>>(2, std::vector<int>(1, 1));
  EXPECT_EQ(Transpose(input), transposed);
}

TEST(Transpose, matrix_4_x_3) {
  using VectorType = std::vector<int>;
  using MatrixType = std::vector<VectorType>;

  // clang-format off
  MatrixType input = MatrixType{
    VectorType{ 1,  2,  3,  4},
    VectorType{ 5,  6,  7,  8},
    VectorType{ 9, 10, 11, 12},
  };

  MatrixType transposed = MatrixType{
    VectorType{ 1,  5,  9},
    VectorType{ 2,  6, 10},
    VectorType{ 3,  7, 11},
    VectorType{ 4,  8, 12},
  };
  // clang-format on

  EXPECT_EQ(Transpose(input), transposed);
}

TEST(Transpose, matrix_3_x_5) {
  using VectorType = std::vector<int>;
  using MatrixType = std::vector<VectorType>;

  // clang-format off
  MatrixType input = MatrixType{
    VectorType{ 1,  5,  9},
    VectorType{ 2,  6, 10},
    VectorType{ 3,  7, 11},
    VectorType{ 4,  8, 12},
  };
  MatrixType transposed = MatrixType{
    VectorType{ 1,  2,  3,  4},
    VectorType{ 5,  6,  7,  8},
    VectorType{ 9, 10, 11, 12},
  };
  // clang-format on

  EXPECT_EQ(Transpose(input), transposed);
}
