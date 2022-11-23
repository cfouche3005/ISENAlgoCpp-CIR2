#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

#include "main.hpp"

int main(){

};

void Equation::setCoeff(double x, double y, double z){
    a=x;
    b=y;
    c=z;
}

Result Equation::resolveEquation(){
    Result result
    double det = (pow(b,2)-4*a*c);
    switch (det){
        case det<0 :
            std::cout << "Déterminant = " << det << " : Erreur" << std::endl;
            break;
        case det=0 :
            result.ra1 = (-b/(2*a));
            result.num = 1
            return result;
            break;
        case det>0 :
            result.ra1 = ((-b-sqrt(det))/(2*a));
            result.ra2 = ((-b+sqrt(det))/(2*a));
            result.num = 2;
            return result;
            break;
    }
}

void Equation::viewEquation(){
    std::cout << "L'équation est : " << a << "x² + " << b << "x + "<< c << std::endl;
}