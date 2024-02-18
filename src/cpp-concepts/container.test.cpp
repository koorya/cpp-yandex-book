#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <iostream>
#include <sstream>
#include <vector>

template <typename T>
std::string PrintContainer(T& container, std::string delimeter) {
  std::ostringstream print;
  for (auto it = container.begin(); it != container.end(); ++it) {
    print << *it;
    if (std::next(it) != container.end()) print << delimeter;
  }
  return print.str();
}

template <typename T>
void Print(T& container, std::string delimeter) {
  std::cout << PrintContainer(container, delimeter);
}

TEST(Iterator, run_method) {
  auto foo = std::vector{1, 2, 3, 4, 5};
  //
  EXPECT_EQ(PrintContainer(foo, ", "), "1, 2, 3, 4, 5");
}