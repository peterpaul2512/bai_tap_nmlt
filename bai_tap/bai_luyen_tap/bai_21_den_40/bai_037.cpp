//
// Created by Admin on 2/24/2025.
//
// Bài 37: Tính S(n) = CanBac N(N + CanBac N – 1(N – 1 + … + CanBac3(3 + CanBac2(2))) có n – 1 dấu căn
#include <iostream>
#include <cmath>
using namespace std;

double tinhS37(int n) {
  double result = 0.0;
  for (int i = 3; i <= n; i++) {
     result = pow(i + result, 1.0 / i);
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
        cout << "Gia tri S(" << n << ") = " << tinhS37(n) << endl;
    }
    return 0;
}