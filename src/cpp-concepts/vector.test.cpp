
#include <gtest/gtest.h>

#include <vector>

TEST(Vector, definition) {
  auto foo = std::vector{std::vector{1, 2, 3, 4}, {5, 6, 7}};

  EXPECT_EQ(foo[1][2], 7);
  EXPECT_EQ(foo[1][1], 6);
}