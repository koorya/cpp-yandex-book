#include "./CommonPrefix.h"

#include <string>
#include <vector>

std::string CommonPrefix(const std::vector<std::string>& words) {
  if (!words.size()) return std::string();

  size_t count = 0;
  for (; count < words[0].length(); count++) {
    for (auto word : words) {
      if (word.length() < count || words[0][count] != word[count]) {
        return words[0].substr(0, count);
      }
    }
  }
  return words[0];
}