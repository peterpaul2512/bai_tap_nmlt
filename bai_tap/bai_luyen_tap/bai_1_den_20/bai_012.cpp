//
// Created by Admin on 2/24/2025.
//
// Bài 12: Tính S(n) = x + x^2 + x^3 + … + x^n

#include <cmath>
#include <iostream>
using namespace std;

int main() {
  double sum = 0.0; // do pow trả về double
  int x;
  int n;

  cout << "Nhap x: ";
  cin >> x;
  cout << "Nhap n: ";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    sum += pow(x, i);
  }

  cout << "Tong la: " << sum << endl;
}