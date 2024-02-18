#include "../PointSort.h"

#include <gtest/gtest.h>

#include <vector>

TEST(PointSort, test_can_run) {
  auto expectedResult = PointList{Point{1, 1}};
  EXPECT_EQ(SortPoints(PointList{Point{1, 1}}), expectedResult);
}

TEST(PointSort, sort_two_points_already_sorted) {
  auto expectedResult = PointList{
      // clang-format off
    Point{1, 1},
    Point{2, 2}
      // clang-format on
  };
  EXPECT_EQ(SortPoints(PointList{Point{1, 1}, Point{2, 2}}), expectedResult);
}

TEST(PointSort, sort_two_points_inverse_sorted) {
  auto expectedResult = PointList{
      // clang-format off
    Point{1, 1},
    Point{2, 2}
      // clang-format on
  };
  EXPECT_EQ(SortPoints(PointList{Point{2, 2}, Point{1, 1}}), expectedResult);
}

TEST(PointSort, sort_two_points_task) {
  auto expectedResult = PointList{
      // clang-format off
    Point{1, 2},
    Point{2, 3}
      // clang-format on
  };
  EXPECT_EQ(SortPoints(PointList{Point{2, 3}, Point{1, 2}}), expectedResult);
}
