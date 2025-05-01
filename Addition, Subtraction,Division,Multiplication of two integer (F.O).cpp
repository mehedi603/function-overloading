#include <iostream>
using namespace std;

int num(int a, int b) {
    return a + b;
}
int num(int a, int b, char s) {
    if (s == '-') {
        return a - b;
    } else if (s == '*') {
        return a * b;
    } else if (s == '/') {
        if (b != 0)
            return a / b;
        else {
            cout << "Error" << endl;
            return 0;
        }
    } else {
        cout << "Invalid" << endl;
        return 0;
    }
}

int main() {
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Addition: " << num(a, b) << endl;
    cout << "Subtraction: " << num(a, b, '-') << endl;
    cout << "Multiplication: " << num(a, b, '*') << endl;
    cout << "Division: " << num(a, b, '/') << endl;

    return 0;
}