#include <iostream>
#include <algorithm>

int main()
{

  std::string str;
  std::getline(std::cin, str);

  auto end = std::remove(str.begin(), str.end(), ' ');
  str.resize(std::distance(str.begin(), end));

  for (size_t i = 0; i != str.size() / 2; ++i)
  {
    if (str[i] != str[(str.size() - 1) - i])
    {
      std::cout << "NO\n";
      return 0;
    }
  }
  std::cout << "YES\n";
}