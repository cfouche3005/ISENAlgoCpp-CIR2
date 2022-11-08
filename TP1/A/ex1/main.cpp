#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

int main(){
    int val1 = 0;
    std::cout << "Valeur 1" << std::endl;
    std::cin >> val1;

    int val2 =0;
    std::cout << "Valeur 2" << std::endl;
    std::cin >> val2;

    int result = val1 + val2;
    std::cout << val1 << "+" << val2 << "=" << result << std::endl;

    bool positif;
    if (result <= 0){
        positif = false;
    }else{
        positif = true;
    }
    std::cout << "Positif ? "<< std::boolalpha << positif << std::endl;
}