#include "../Join.h"

#include <gtest/gtest.h>

TEST(Join, test_can_run) { EXPECT_EQ(1, 1); }

TEST(Join, single_string) {
  EXPECT_EQ(Join({"hello world"}, ' '), "hello world");
}

TEST(Join, empty_vector) { EXPECT_EQ(Join({}, ' '), ""); }

TEST(Join, two_strings) {
  EXPECT_EQ(Join({"hello", "world"}, ' '), "hello world");
}

TEST(Join, many_with_dash) {
  EXPECT_EQ(Join({"hello", "world", "many", "with", "dash"}, '-'),
            "hello-world-many-with-dash");
}
