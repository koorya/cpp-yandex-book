#include <iostream>
#include <vector>

int main(){

  size_t n;
  std::cin >> n;

  std::vector<int> pm(n);

  for(size_t i=1; i != n+1; ++i){
    size_t a;
    std::cin >> a;
    pm[a-1] = i;
  }

  for(auto i : pm)
    std::cout << i << " ";

}
