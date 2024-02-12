#include <iostream>
#include <vector>

int main() {
  size_t rows, columns, mines;

  std::cin >> rows >> columns >> mines;

  std::vector<std::vector<char>> field(rows, std::vector<char>(columns, '0'));

  for (size_t x, y, i = 0; i != mines; ++i) {
    std::cin >> x >> y;
    field[x - 1][y - 1] = '*';
  }

  for (auto i : field) {
    for (auto j : i) std::cout << j << " ";
    std::cout << "\n";
  }
}