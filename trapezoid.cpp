#include <iostream>
#include <cmath>

using namespace std;

double perimeter(double* array);
double square(double* array);
double mid_line(double* array);

int main() {
    double trapezoid_perimeter, area_of_trapezoid, midline_lenth;
    double array_of_length_values[4];
    for (int i = 0; i < 4; i++) {
        cin >> array_of_length_values[i];
    }
    trapezoid_perimeter = perimeter(array_of_length_values);
    cout << trapezoid_perimeter << endl;
    area_of_trapezoid = square(array_of_length_values);
    cout << area_of_trapezoid << endl;
    midline_lenth = mid_line(array_of_length_values);
    cout << midline_lenth << endl;
}


double perimeter(double* array) {
    double sum = 0;
    for (int i = 0; i < 4; i++) {
        sum += array[i];
    }
    return sum;
}

double square(double* array) {
    double squ, a = array[1], b = array[3], c = array[0], d = array[2];
    squ = ((a + b) / 2) * sqrt(c * c - pow((pow(b - a, 2) + c*c - d*d) / (2 * (b - a)), 2));
    return squ;
}

double mid_line(double* array) {
    return (array[1] + array[3]) / 2;
}