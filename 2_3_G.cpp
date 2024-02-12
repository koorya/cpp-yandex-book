#include <iostream>

int main(){

  int n;
  std::cin >> n;
  double summ = 0;

  for(int i=1; i<=n; i += 2){
    summ += 1.0/i;
  }
  for(int i=2; i<=n; i += 2){
    summ -= 1.0/i;
  }
  std::cout << summ;
}
