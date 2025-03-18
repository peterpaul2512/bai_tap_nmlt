//
// Created by Admin on 2/24/2025.
//
// Bài 33: Tính S(n) = CanBac2(2+CanBac2(2+….+CanBac2(2 + CanBac2(2)))) có n dấu căn

#include <iostream>
#include <cmath>
using namespace std;

double tinhS33(int n) {
  double result = 0.0;
  for (int i = 1; i <= n; i++) {
    result = sqrt(2 + result); // S(n) = sqrt(2 + S(n-1))
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
        cout << "Gia tri S(" << n << ") = " << tinhS33(n) << endl;
    }
    return 0;
}
