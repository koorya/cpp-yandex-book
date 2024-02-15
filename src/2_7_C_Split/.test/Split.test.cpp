#include "../Split.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string>
#include <vector>

TEST(Split, emptyString) {
  EXPECT_EQ(Split("", '-'), std::vector<std::string>());
}

TEST(Split, WithoutDelimeter) {
  EXPECT_EQ(Split("hello world", '-'), std::vector<std::string>{"hello world"});
}

TEST(Split, MiddleDelimeter) {
  auto foo = std::vector<std::string>();
  foo.push_back("hello");
  foo.push_back("world");

  EXPECT_EQ(Split("hello-world", '-'), foo);
}

TEST(Split, StartDelimeter) {
  auto foo = std::vector<std::string>();
  foo.push_back("");
  foo.push_back("hello world");

  EXPECT_EQ(Split("-hello world", '-'), foo);
}

TEST(Split, EndDelimeter) {
  auto foo = std::vector<std::string>();
  foo.push_back("hello world");
  foo.push_back("");

  EXPECT_EQ(Split("hello world-", '-'), foo);
}

TEST(Split, StartMiddleEndDelimeter) {
  auto foo = std::vector<std::string>();
  foo.push_back("");
  foo.push_back("hello");
  foo.push_back("world");
  foo.push_back("");

  EXPECT_EQ(Split("-hello-world-", '-'), foo);
}

TEST(Split, DoubleDelimeter) {
  auto foo = std::vector<std::string>();
  foo.push_back("");
  foo.push_back("hello");
  foo.push_back("");
  foo.push_back("world");
  foo.push_back("");

  EXPECT_EQ(Split("-hello--world-", '-'), foo);
}

TEST(Split, DoubleTwoDelimeter) {
  auto foo = std::vector<std::string>();
  foo.push_back("");
  foo.push_back("hello");
  foo.push_back("");
  foo.push_back("");
  foo.push_back("world");
  foo.push_back("");

  EXPECT_EQ(Split("-hello---world-", '-'), foo);
}

TEST(Split, ManyDelimeter) {
  auto foo = std::vector<std::string>();
  foo.push_back("");
  foo.push_back("hello");
  foo.push_back("");
  foo.push_back("");
  foo.push_back("wor");
  foo.push_back("ld");
  foo.push_back("");
  foo.push_back("");

  EXPECT_EQ(Split("-hello---wor-ld--", '-'), foo);
}