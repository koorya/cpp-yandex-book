#include <string>
#include <vector>

std::string Join(const std::vector<std::string>& tokens, char delimiter) {
  std::string sum;
  for (auto& token : tokens) {
    if (&token != &tokens[0]) sum += delimiter;
    sum += token;
  }
  return sum;
}
