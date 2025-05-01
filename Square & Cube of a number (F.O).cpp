#include <iostream>
using namespace std;

int calculate(int n) {
    return n * n;
}
int calculate(int n, bool isCube) {
    return n * n * n;
}

int main() {
    int number;
    
    cout << "Enter a number: ";
    cin >> number;

    cout << "The square of " << number << " is: " << calculate(number) << endl;
    cout << "The cube of " << number << " is: " << calculate(number, true) << endl;

    return 0;
}