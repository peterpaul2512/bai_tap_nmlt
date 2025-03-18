//
// Created by Admin on 2/24/2025.
//
// Bài 18: Tính S(n) = 1 + x^2/2! + x^4/4! + … + (x^2n)/(2n)!

#include <iostream>
using namespace std;

double tinhS18(int x, int n) {
    double result = 0.0;
    double power = 1.0;  // Lưu giá trị x^i
    int factorial = 1;   // Lưu giá trị i!

    for (int i = 1; i <= n; i++) {
        power *= x*x;
        factorial *= (2 * i - 1) * (2 * i); // (2n)!
        result += power / factorial;
    }

    return result;
}

int main() {
    int x, n;

    cout << "Enter x: ";
    cin >> x;
    cout << "Enter n: ";
    cin >> n;

    cout << "Result: " << tinhS18(x, n) << endl;
    return 0;
}
