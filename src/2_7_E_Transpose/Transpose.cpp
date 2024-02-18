#include <string>
#include <vector>

std::vector<std::vector<int>> Transpose(
    const std::vector<std::vector<int>>& matrix) {
  auto n = matrix.size();
  auto m = matrix.front().size();

  auto template_row = std::vector<int>(n);
  auto t_matrix = std::vector<std::vector<int>>(m, template_row);

  for (size_t i = 0; i != n; ++i) {
    for (size_t j = 0; j != m; ++j) {
      t_matrix[j][i] = matrix[i][j];
    }
  }

  return t_matrix;
}
