//
// Created by Admin on 2/25/2025.
// Bài 74: Tính S(x, n) = 1 – x + x^3/3! – x^5/5! + … + (-1)^n+1 * x^2n+1/(2n + 1)!
#include <iostream>
#include <cmath>
using namespace std;

double tinhGiaiThua(int n) {
    double giaiThua = 1.0;
    for (int i = 1; i <= n; i++) {
        giaiThua *= i;
    }
    return giaiThua;
}

double tinhS74(int x, int n) {
    double sum = 1.0;
    for (int i = 0; i <= n; i++) {
        double tu = pow(x, 2 * i + 1);
        double mau = tinhGiaiThua(2 * i + 1);
        sum += pow(-1, i+1) * (tu / mau);
    }
    return sum;
}

int main() {
    int x, n;
    cout << "Nhap x, n: ";
    cin >> x >> n;

    if (n < 0) {
        cout << "Vui long nhap so nguyen duong n >= 0!" << endl;
    } else {
        cout << "Gia tri S(" << n << ") = " << tinhS74(x, n) << endl;
    }
    return 0;
}
