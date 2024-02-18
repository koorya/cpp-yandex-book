#include "../PointSort.h"

#include <gtest/gtest.h>

#include <vector>

TEST(PointSort, test_can_run) {
  auto expectedResult = PointList{Point{1, 1}};
  EXPECT_EQ(SortPoints(PointList{Point{1, 1}}), expectedResult);
}
