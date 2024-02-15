#include "../ArgMax.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

TEST(ArgMax, defined1) {
  std::vector<std::vector<int>> matrix(10, std::vector<int>(10, 2));
  matrix[0][1] = 3;

  EXPECT_EQ(matrix[0][0], 2);
  EXPECT_EQ(matrix[0][1], 3);
  auto [one, two] = MatrixArgMax(matrix);
  EXPECT_EQ(one, 0);
  EXPECT_EQ(two, 1);
}

TEST(ArgMax, defined2) {
  std::vector<std::vector<int>> matrix(10, std::vector<int>(10, 2));
  matrix[2][3] = 3;

  EXPECT_EQ(matrix[0][0], 2);
  EXPECT_EQ(matrix[2][3], 3);
  auto [one, two] = MatrixArgMax(matrix);
  EXPECT_EQ(one, 2);
  EXPECT_EQ(two, 3);
}
