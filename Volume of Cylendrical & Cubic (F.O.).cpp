#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

double volume(double s) {
    return pow(s, 3);
}

double volume(double r, double h) {
    return 3.14159 * r * r * h;
}

int main() {
    double s, r, h;

    cout << "Enter radius and height of the cylinder: ";
    cin >> r >> h;
    cout << "Volume of Cylinder = " << volume(r, h) << endl;

    cout << "Enter side of the cube: ";
    cin >> s;
    cout << "Volume of Cube = " << volume(s) << endl;

    getch();
    return 0;
}