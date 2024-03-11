#include "Train.h"

#include <deque>
#include <string>

using namespace TrainCombiner;

std::string TrainCombiner::Train(const std::string& a) {
  auto deq = std::deque<int>(a.length());

  return "";
}

std::vector<Command> TrainCombiner::getCommandsFromString(const std::string&) {
  Command first = {Side::left, 3, Action::append, 0};
  std::vector<Command> result;
  result.push_back(first);
  return result;
}
