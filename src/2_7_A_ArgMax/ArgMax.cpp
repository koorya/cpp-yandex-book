#include "ArgMax.h"

#include <vector>

std::pair<std::size_t, std::size_t> MatrixArgMax(
    const std::vector<std::vector<int>>& matrix) {
  std::size_t x = 0;
  std::size_t y = 0;

  auto max = matrix[x][y];
  for (std::size_t i = 0; i < matrix.size(); ++i) {
    for (std::size_t j = 0; j < matrix[i].size(); ++j) {
      if (max < matrix[i][j]) {
        max = matrix[i][j];
        x = i;
        y = j;
      }
    }
  }

  return std::pair(x, y);
}