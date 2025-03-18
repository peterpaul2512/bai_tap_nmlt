//
// Created by Admin on 2/25/2025.
//
// Bài 51: Tìm chữ số lớn nhất của số nguyên dương n
#include <iostream>
using namespace std;

int tinhS51(int n) {
  int max = 0;
  while (n > 0) {
    int chuSo = n%10;
    if (chuSo > max) {
      max = chuSo;
    }
    n = n/10;
  }
  return max;
}

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;

  if (n < 1) {
    cout << "Vui long nhap so nguyen duong!" << endl;
  } else {
    cout << "So lon nhat trong " << n << " la: " << tinhS51(n) << endl;
  }

  return 0;
}