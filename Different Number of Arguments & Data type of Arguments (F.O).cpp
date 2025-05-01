#include <iostream>
#include <conio.h>
using namespace std;

void display(int a, int b) {
    cout << "Sum of integers: " << a + b << endl;
}
void display(float a) {
    cout << "Square of float: " << a * a << endl;
}
void display(double a, double b) {
    cout << "Product of doubles: " << a * b << endl;
}
void display(float a, float b) {
    cout << "Division of floats: " << a / b<< endl;
}
void display(string a, string b) {
    cout << "Concatenated strings: " << a + b << endl;
}
void display(int a, int b, int c) {
    cout << "Sum of three integers: " << a + b + c << endl;
}

int main() {
    display(10, 20);
    display(5.5f);
    display(3.2, 4.5);
    display(4.7f, 2.3f);
    display("Hello", " World");
    display(1, 2, 3);

    getch();
    return 0;
}