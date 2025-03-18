//
// Created by Admin on 2/24/2025.
//
// Bài 38: Tính S(n) = CanBac N + 1(N + CanBac N(N – 1 +…+CanBac3(2 + CanBac2(1)))) có n dấu căn
#include <iostream>
#include <cmath>
using namespace std;

double tinhS38(int n) {
    double result = 1.0;
    for (int i = 2; i <= n; i++) {
        result = pow(i + result, 1.0 / (i+1));
    }
    return result;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    if (n < 1) {
        cout << "Vui long nhap so nguyen duong n >= 1!" << endl;
    } else {
        cout << "Gia tri S(" << n << ") = " << tinhS38(n) << endl;
    }
    return 0;
}