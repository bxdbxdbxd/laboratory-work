#include "figure.hpp"

double Perimetr (double first, double second, double third){
    return first+second+third;
}

double squareGeron(double first, double second, double third, double perimetr){
    double semiPerimeter=perimetr/2;
    double square=sqrt(semiPerimeter * (semiPerimeter - first) * (semiPerimeter - second) * (semiPerimeter - third));
    return square;
}

bool checkIsosceles(double first, double second, double third){
    bool check=false;
    if((first == second && first != third) || (first == third && first != second) || (second == third && second != first)){
        check=true;
    }
    return check;
}