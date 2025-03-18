//
// Created by Admin on 2/25/2025.
// Bài 71: Tính S(x, n) = -x + x^2/(1 + 2) – x^3/(1 + 2 + 3) + … + (-1)^n * x^n/(1 + 2 +… + n)
#include <iostream>
#include <cmath>
using namespace std;

double tinhS71(int x, int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        double mau = i * (i + 1) / 2.0;
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
        cout << "Gia tri S(" << n << ") = " << tinhS71(x, n) << endl;
    }
    return 0;
}