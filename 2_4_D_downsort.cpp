#include <iostream>
#include <vector>
#include <algorithm>

int main(){
  std::vector<std::string> unsorted;

  for(std::string line; std::getline(std::cin, line);){
    unsorted.push_back(line);
  }

  std::sort(unsorted.rbegin(), unsorted.rend());

  for(auto i : unsorted)
    std::cout << i << "\n";

}
