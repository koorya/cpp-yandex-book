#include "../Train.h"

#include <gtest/gtest.h>

using namespace TrainCombiner;

TEST(Train, defined) {
  auto result = Train("");
  EXPECT_EQ(result, "");
}

// TEST(Train, add_left) {
//   auto result = Train("+left 3\n");
//   EXPECT_EQ(result, "3\n");
// }

TEST(Train, command_transformer) {
  auto commands = getCommandsFromString("+left 3\n");

  EXPECT_EQ(commands[0].action, Action::append);
  EXPECT_EQ(commands[0].carName, 3);
  EXPECT_EQ(commands[0].side, Side::left);
}
