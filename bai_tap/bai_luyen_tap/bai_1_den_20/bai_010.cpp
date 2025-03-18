//
// Created by Admin on 2/22/2025.
//
// Bài 10: Tính T(x, n) = x^n

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, result;
    int n;

    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;

    result = pow(x, n);

    cout << "T(x, n) = " << result << endl;
    return 0;
}
