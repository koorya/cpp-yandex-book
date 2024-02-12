
#include <iostream>

int main(){
    int week, month;
    std::cin >> week >> month;

    for(int i=1; i<week; ++i){
        std::cout<<"   ";
    }
    for(int i=1; i <= month; ++i){
        if(i<=9)
            std::cout << " ";
        std::cout << i;

        if((i+week-1)%7==0 || i == month){
            std::cout << "\n";
        } else {
            std::cout << " ";
        }
    }

}

