#include "../Split.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string>
#include <vector>

TEST(Split, emptyVector) {
  //
  EXPECT_EQ(Split("", '-'), std::vector<std::string>());
}
//