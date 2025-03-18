//
// Created by Admin on 2/25/2025.
// Bài 73: Tính S(x, n) = -1 + x^2/2! – x^4/4! + … + (-1)^n+1 * x^2n/(2n)!
#include <iostream>
#include <cmath>
using namespace std;

double tinhS73(int x, int n) {
    double sum = -1.0;
    double giaiThua = 1.0;
    for (int i = 1; i <= n; i++) {
        giaiThua *= (2*i -1)*(2*i);
        sum += pow(-1,i+1)* (pow(x, 2*i)/giaiThua);
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
        cout << "Gia tri S(" << n << ") = " << tinhS73(x, n) << endl;
    }
    return 0;
}