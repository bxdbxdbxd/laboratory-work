#include <iostream>
#include <cmath>
#include "figure.hpp"

using namespace std;

double filling_array(double* array, int len);

int main() {
    int figure_option;
    double array_of_sides[4];
    do {
    cout << "Select a shape: \n1. Rectangle\n2. Triangle\n3. Trapezoid" << endl;
    cin >> figure_option;
    switch(figure_option) {
        case 1:
            filling_array(array_of_sides, 2);
            cout << "Perimeter: " << Perimetr(array_of_sides[0], array_of_sides[1]) << "\nSquare: " << Square(array_of_sides[0], array_of_sides[1]) << "\nDiagonal: " << Diagonal(array_of_sides[0], array_of_sides[1]) << endl;
            break;
        case 2:
            filling_array(array_of_sides, 3);
            cout << "wait";
            break;
        case 3:
            filling_array(array_of_sides, 4);
            cout << "Perimeter: " << trapezoid_perimeter(array_of_sides) << "\nSquare: " << area_of_trapezoid(array_of_sides) << "\nMidline lenth: " << midline_lenth(array_of_sides) << endl;
            break;
    };
    } while (figure_option != 0);
    return 0;
}

double filling_array(double* array, int len) {
    for (int i = 0; i < len; i++) {
        cin >> array[i];
    }
}