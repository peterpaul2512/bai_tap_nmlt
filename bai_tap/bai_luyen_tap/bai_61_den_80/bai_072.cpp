//
// Created by Admin on 2/25/2025.
// Bài 72: Tính S(x, n) = – x + x^2/2! – x^3/3! + … + (-1)^n * x^n/n!
#include <iostream>
#include <cmath>
using namespace std;

double tinhS72(int x, int n) {
    double sum = 0.0;
    int giaiThua = 1;
    for (int i = 1; i <= n; i++) {
        giaiThua *= i;
        double mau = giaiThua;
        sum += pow(-1,i)* (pow(x, i)/mau);
    }
    return sum;
}

int main() {
    int x, n;
    cout << "Nhap x, n: ";
    cin >> x >> n;

    if (n < 1) {
        cout << "Vui long nhap so nguyen duong n >= 1!" << endl;
    } else {
        cout << "Gia tri S(" << n << ") = " << tinhS72(x, n) << endl;
    }
    return 0;
}