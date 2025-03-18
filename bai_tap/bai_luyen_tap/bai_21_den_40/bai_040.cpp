//
// Created by Admin on 2/24/2025.
//
// Bài 40: Tính S(n) = CanBac2(x^n + CanBac2(x^n-1 + … + CanBac2(x^2 + CanBac2(x)))) có n dấu căn
#include <iostream>
#include <cmath>
using namespace std;

double tinhS40(int x, int n) {
    double result = sqrt(x); // căn 2 của x
    for (int i = 2; i <= n; i++) {
        result = sqrt(pow(x,i) + result);
    }
    return result;
}

int main() {
    int n;
    int x;
    cout << "Nhap n: ";
    cin >> n;

    cout << "Nhap x: ";
    cin >> x;

    if (n < 1) {
        cout << "Vui long nhap so nguyen duong n >= 1!" << endl;
    } else {
        cout << "Gia tri S(" << n << ") = " << tinhS40(x, n) << endl;
    }
    return 0;
}