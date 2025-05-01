#include <iostream>
#include <conio.h>
using namespace std;

double area(double l, double b) {
    return l * b;
}

double area(double b, double h,int x) {
    return 0.5 * b * h;
}

int main() {
    double l, b, h;

    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;
    cout << "Area of Rectangle = " << area(l, b) << endl;

    cout << "Enter base and height of triangle: ";
    cin >> b >> h;
    cout << "Area of Triangle = " << area(b, h, 0) << endl;

    getch();
    return 0;
}