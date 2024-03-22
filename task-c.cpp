#include <iostream>
#include <cmath>

using namespace std;

double perimeter(char* array);
double square(char* array);

int main() {
    double trapezoid_perimeter, area_of_trapezoid, midline_lenth;
    char array_of_length_values[4];
    for (int i = 0; i < 4; i++) {
        cin >> array_of_length_values[i];
    }
    trapezoid_perimeter = perimeter(array_of_length_values);
    double sum = 0;
    for (int i = 0; i < 4; i++) {
        sum = sum + array_of_length_values[i];
        cout << array_of_length_values[i] << " " << sum << endl;
    }
    cout << trapezoid_perimeter << " " << sum;
}


double perimeter(char* array) {
    double sum = 0;
    for (int i = 0; i < 4; i++) {
        sum += array[i];
    }
    return sum;
}