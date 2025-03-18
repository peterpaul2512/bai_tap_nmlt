//
// Created by Admin on 2/24/2025.
//
// Bài 39: Tính S(n) = CanBac (N+1)(N! + CanBacN((N – 1)! + … + CanBac3(2! + CanBac2(1!))) có n dấu căn
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

double tinhS39(int n) {
    double result = 1.0; // căn 2 của 1
    for (int i = 2; i <= n; i++) {
        result = pow((tinhGiaiThua(i) + result), 1.0 / (i+1));
    }
    return result;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    if (n < 2) {
        cout << "Vui long nhap so nguyen duong n >= 2!" << endl;
    } else {
        cout << "Gia tri S(" << n << ") = " << tinhS39(n) << endl;
    }
    return 0;
}