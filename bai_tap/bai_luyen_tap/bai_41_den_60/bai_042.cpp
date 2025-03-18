//
// Created by Admin on 2/24/2025.
//
// Bài 42: Cho n là số nguyên dương. Hãy tìm giá trị nguyên dương k lớn nhất sao cho S(k) < n.
// Trong đó chuỗi k được định nghĩa như sau: S(k) = 1 + 2 + 3 + … + k
#include <iostream>
using namespace std;

int tinhS42(int n) {
  int k = 0;
  int sum = 0;

  while (sum + (k + 1) < n) {
    k++;
    sum += k;
  }

  return k;
}

int main() {
  int n;
  cout << "Input n: ";
  cin >> n;

  if (n < 1) {
    cout << "Vui long nhap so nguyen duong n >= 1!" << endl;
  } else {
    cout << "K can tim = " << tinhS42(n) << endl;
  }
  return 0;
}