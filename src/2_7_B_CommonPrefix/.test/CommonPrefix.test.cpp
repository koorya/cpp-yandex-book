#include "../CommonPrefix.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

TEST(CommonPrefix, OneLineFirst) {
  auto lines = std::vector<std::string>{"hello world"};
  EXPECT_EQ(CommonPrefix(lines), "hello world");
}

TEST(CommonPrefix, OneLineSecond) {
  auto lines = std::vector<std::string>{"buy buy"};
  EXPECT_EQ(CommonPrefix(lines), "buy buy");
}

TEST(CommonPrefix, EmptyList) {
  auto lines = std::vector<std::string>();
  EXPECT_EQ(CommonPrefix(lines), "");
}

TEST(CommonPrefix, TwoLines) {
  auto lines = std::vector<std::string>{"apple", "application"};
  EXPECT_EQ(CommonPrefix(lines), "appl");
}

TEST(CommonPrefix, ThreeLines) {
  auto lines = std::vector<std::string>{"apple", "apricot", "application"};
  EXPECT_EQ(CommonPrefix(lines), "ap");
}
