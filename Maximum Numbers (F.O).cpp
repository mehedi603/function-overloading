#include <iostream>
using namespace std;

int maximum(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
double maximum(double a, double b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int a, b;
    double x, y;

    cout << "Enter two integers: ";
    cin >> a >> b;
    
    cout << "Enter two floating-point numbers: ";
    cin >> x >> y;

    cout << "Maximum of " << a << " and " << b << " is: " << maximum(a, b) << endl;
    cout << "Maximum of " << x << " and " << y << " is: " << maximum(x, y) << endl;

    return 0;
}