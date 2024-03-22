#include "figure.hpp"

double Perimetr(double length, double width) {
    double per = (length + width) * 2;
    return per;
}

double Square(double length, double width) {
    double sqr = length * width;
    return sqr;
}

double Diagonal(double length, double width) {
    double diag = sqrt(pow(length, 2) + pow(width, 2));
    return diag;
}