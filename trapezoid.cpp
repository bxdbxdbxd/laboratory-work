#include "figure.hpp"

double trapezoid_perimeter(double* array) {
    double sum = 0;
    for (int i = 0; i < 4; i++) {
        sum += array[i];
    }
    return sum;
}

double area_of_trapezoid(double* array) {
    double squ, a = array[1], b = array[3], c = array[0], d = array[2];
    squ = ((a + b) / 2) * sqrt(c * c - pow((pow(b - a, 2) + c*c - d*d) / (2 * (b - a)), 2));
    return squ;
}

double midline_lenth(double* array) {
    return (array[1] + array[3]) / 2;
}