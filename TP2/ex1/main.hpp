#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <cmath>

class Result {
    public:
    double ra1;
    double ra2;
    int num;
};

class Equation {
    double a;
    double b;
    double c;
    void setCoeff(double x, double y, double z);
    void viewEquation();
    Result resolveEquation();
};

