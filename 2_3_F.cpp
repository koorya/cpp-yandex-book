#include <iostream>

int main(){
  long long int x;
  std::cin >> x;
  int summ = 0;
  for(;x>0;x/=10){
    summ += x%10;
  }
  std::cout<<summ<<"\n";
}

