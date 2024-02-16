#include <string>
#include <vector>

std::string Join(const std::vector<std::string>& tokens, char
                 // delimiter
) {
  if (tokens.empty()) return "";
  return tokens.back();
}
