//
// Created by Admin on 2/24/2025.
//
// Bài 36: Tính S(n) = CanBac2(n! + CanBac2((n-1)! +CanBac2((n – 2)! + … + CanBac2(2!) + CanBac2(1!)))) có n dấu căn
#include <iostream>
#include <cmath>
using namespace std;

double tinhS36(int n) {
    double result = 0.0;
    int giaiThua = 1;
    for (int i = 1; i <= n; i++) {
        giaiThua *= i;
        result = sqrt(giaiThua + result);
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
        cout << "Gia tri S(" << n << ") = " << tinhS36(n) << endl;
    }
    return 0;
}