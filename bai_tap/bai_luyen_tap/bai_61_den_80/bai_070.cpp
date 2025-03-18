//
// Created by Admin on 2/25/2025.
//
// Bài 70: Tính S(n) = 1 – 1/(1 + 2) + 1/(1 + 2 + 3) + … + (-1)^n+1 * 1/(1 + 2 + 3+ … + n)
#include <iostream>
#include <cmath>
using namespace std;

double tinhS70(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        double mau = i * (i + 1) / 2.0;
        sum += pow(-1,i+1)* (1.0/mau);
    }
    return sum;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    if (n < 1) {
        cout << "Vui long nhap so nguyen duong n >= 1!" << endl;
    } else {
        cout << "Gia tri S(" << n << ") = " << tinhS70(n) << endl;
    }
    return 0;
}