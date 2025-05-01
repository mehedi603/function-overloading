#include <iostream>
#include <cmath>
using namespace std;

int power(int b, int p) {
    int x = 1;
    for (int i = 0; i < p; ++i) {
        x *= b;
    }
    return x;
}
double power(double b, int p) {
    double x = 1.0;
    for (int i = 0; i < p; ++i) {
        x *= b;
    }
    return x;
}
double power(double b, double p) {
    return pow(b, p);
}

int main() {
    int int_b = 2, int_p = 3;
    double double_b = 2.5, double_p = 2.0;

    cout << "Integer power: " << power(int_b, int_p) << endl;
    cout << "Double base with integer exponent: " << power(double_b, int_p) << endl;
    cout << "Double base with double exponent: " << power(double_b, double_p) << endl;

    return 0;
}