#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

int main(){
    auto taille = 0;
    int moy = 0;
    std::cout << "Taille du tableau" << std::endl;
    std::cin >> taille;

    if (taille > 0){
        int* tableau = new int[taille];
        for (int i = 0; i < taille; i++){
            std::cout << "Valeur " << i << " = ";
            std::cin >> tableau[i];
        }
        for (int i = 0; i < taille; i++){
            std::cout << tableau[i];
            moy += tableau[i];
        }
        moy = moy/taille;
        std::cout << std::endl;
        std::cout << "Moyenne = " << moy << std::endl;
        delete[] tableau;
    }
}