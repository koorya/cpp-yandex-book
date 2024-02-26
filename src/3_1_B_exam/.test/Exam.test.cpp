#include "../Exam.h"

#include <gtest/gtest.h>

#include <deque>
#include <sstream>
#include <string>
#include <vector>

TEST(Exam, readDeque) {
  std::istringstream input(
      "3\n"
      "Ivanov top\n"
      "Petrov top\n"
      "Sidorov bottom\n");
  auto deque = Exam::readDeque(input);
  std::string expected[]{
      // clang-format off
      // bottom here
    "Sidorov",
    "Ivanov", 
    "Petrov",
      // clang-format on
  };

  EXPECT_EQ(
      std::vector(deque.begin(), deque.end()),
      std::vector(expected, expected + sizeof(expected) / sizeof(std::string)));
}

TEST(Exam, readRequests) {
  std::istringstream input(
      "3\n"
      "8\n"
      "4\n"
      "7\n");

  auto req = Exam::readRequests(input);
  std::vector<int> expected = {8, 4, 7};
  EXPECT_EQ(req, expected);
}

TEST(Exam, _Exam) {
  std::deque<std::string> deq = {
      "Petrov",
      "Sidorov",
      "Ivanov",
  };
  std::vector<int> req = {3, 1, 2, 3};
  auto res = Exam::_Exam(deq, req);
  EXPECT_EQ(res.str(),
            "Petrov\n"
            "Ivanov\n"
            "Sidorov\n"
            "Petrov\n");
}

TEST(Exam, Exam1) {
  std::istringstream input(
      "3\n"
      "Ivanov top\n"
      "Petrov top\n"
      "Sidorov bottom\n"
      "2\n"
      "1\n"
      "3\n");

  std::ostringstream res;
  std::string expeted =
      "Petrov\n"
      "Sidorov\n";

  Exam::Exam(input, res);
  EXPECT_EQ(res.str(), expeted);
}

TEST(Exam, Exam2) {
  std::istringstream input(
      "3\n"
      "Ivanov top\n"
      "Ivanov bottom\n"
      "Ivanov top\n"
      "4\n"
      "1\n"
      "2\n"
      "3\n"
      "1\n");

  std::ostringstream res;
  std::string expeted =
      "Ivanov\n"
      "Ivanov\n"
      "Ivanov\n"
      "Ivanov\n";

  Exam::Exam(input, res);
  EXPECT_EQ(res.str(), expeted);
}
