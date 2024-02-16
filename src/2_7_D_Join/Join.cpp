#include <string>
#include <vector>

std::string Join(const std::vector<std::string>& tokens, char delimiter) {
  std::string joinedTokens;
  for (auto& token : tokens) {
    if (&token != &tokens[0]) joinedTokens += delimiter;
    joinedTokens += token;
  }
  return joinedTokens;
}
