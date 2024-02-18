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
