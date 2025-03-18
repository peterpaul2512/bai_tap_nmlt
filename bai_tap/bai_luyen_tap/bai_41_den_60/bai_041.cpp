//
// Created by Admin on 2/24/2025.
//
// Bài 41: Tính S(n) = 1 / (1 + 1 / ( 1 + 1 / (…. 1 + 1 / 1 + 1))) có n dấu phân số
#include <iostream>
#include <cmath>
using namespace std;

double tinhS41(int n) {
    double result = 1.0;
    for (int i = 1; i <= n; i++) {
        result = 1.0 / (1 + result);;
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
        cout << "Gia tri S(" << n << ") = " << tinhS41(n) << endl;
    }
    return 0;
}