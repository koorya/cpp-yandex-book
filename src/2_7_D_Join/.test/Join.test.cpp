#include "../Join.h"

#include <gtest/gtest.h>

TEST(Join, test_can_run) { EXPECT_EQ(1, 1); }

TEST(Join, single_string) {
  EXPECT_EQ(Join({"hello world"}, ' '), "hello world");
}

TEST(Join, empty_vector) { EXPECT_EQ(Join({}, ' '), ""); }