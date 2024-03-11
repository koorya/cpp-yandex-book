#include <string>
#include <vector>

namespace TrainCombiner {
enum Side { left, right };
enum Action { append, drop };
struct Command {
  Side side;
  int carName;
  Action action;
  int coutToDrop;
};

std::vector<Command> getCommandsFromString(const std::string&);

std::string Train(const std::string&);
}  // namespace TrainCombiner