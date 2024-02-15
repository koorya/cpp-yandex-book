#include <iostream>
#include <vector>

int main() {
  size_t rows, columns, mines;

  std::cin >> rows >> columns >> mines;

  std::vector<std::vector<char>> field(rows + 2,
                                       std::vector<char>(columns + 2, '0'));

  for (size_t x, y, i = 0; i != mines; ++i) {
    std::cin >> x >> y;
    field[x][y] = '*';
  }

  for (size_t i = 1; i + 1 < field.size(); ++i) {
    for (size_t j = 1; j + 1 < field[i].size(); j++) {
      if (field[i][j] != '*') {
        // clang-format off
        int value= 0
                        +(field[i+1][j-1]=='*')
                        +(field[i+1][j]=='*')
                        +(field[i+1][j+1]=='*')
                        +(field[i][j+1]=='*')
                        +(field[i][j-1]=='*')
                        +(field[i-1][j-1]=='*')
                        +(field[i-1][j]=='*')
                        +(field[i-1][j+1]=='*')
                        ;
        // clang-format on
        std::cout << value;
      } else if (field[i][j] == '*') {
        std::cout << '*';
      }
      std::cout << ' ';
    }

    std::cout << "\n";
  }
}
