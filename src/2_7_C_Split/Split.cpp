#include <string>
#include <vector>

std::vector<std::string> Split(const std::string& str, char delimiter) {
  using std::string;

  if (str.empty()) return {};

  size_t found = str.find(delimiter);
  if (found == string::npos) {
    return {str};
  }

  auto res = std::vector<string>();
  size_t prev = 0;
  for (; found != string::npos; found = str.find(delimiter, prev)) {
    res.push_back(str.substr(prev, found - prev));
    prev = found + 1;
  }
  res.push_back(str.substr(prev, str.length() - prev));

  return res;
};