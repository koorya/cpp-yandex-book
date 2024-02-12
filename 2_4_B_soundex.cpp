#include <iostream>
#include <vector>

int main(){
    std::string word;
    std::cin >> word;

    std::vector<int> code;
    code.reserve(20);

    for(size_t i = 0; i != word.size(); ++i){
        if(i == 0) continue;
        switch (word[i]){
            case 'b':
            case 'f':
            case 'p':
            case 'v':
                if(code.size() == 0 || code.back() != 1)
                    code.push_back(1);
                break;
            case 'c':
            case 'g':
            case 'j':
            case 'k':
            case 'q':
            case 's':
            case 'x':
            case 'z':
                if(code.size() == 0 || code.back() != 2)
                    code.push_back(2);
                break;
            case 'd':
            case 't':
                if(code.size() == 0 || code.back() != 3)
                    code.push_back(3);
                break;
            case 'l':
                if(code.size() == 0 || code.back() != 4)
                    code.push_back(4);
                break;
            case 'm':
            case 'n':
                if(code.size() == 0 || code.back() != 5)
                    code.push_back(5);
                break;
            case 'r':
                if(code.size() == 0 || code.back() != 6)
                    code.push_back(6);
                break;
        }
        if(code.size() == 3)
            break;
    }
    for(;code.size() != 3; code.push_back(0));
    std::cout << word[0];
    for(auto i : code)
        std::cout << i;

}
