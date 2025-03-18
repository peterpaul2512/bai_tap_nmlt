//
// Created by Admin on 2/24/2025.
//
// Bài 11: Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N

#include <iostream>
using namespace std;

int tinhGiaiThua(int a){
  int result = 1;
  for (int i = 1; i <= a; i++) {
    result *= i;
  }
  return result;
}

int main() {
  int n;
  int sum = 0;
  cout << "Nhap n: ";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    sum += tinhGiaiThua(i);
  }
  cout << "Tong la: " << sum << endl;
}