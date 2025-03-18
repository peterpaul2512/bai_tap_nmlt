//
// Created by Admin on 2/22/2025.
//
// Bài 44: Hãy tính tổng các chữ số của số nguyên dương n

#include <iostream>
using namespace std;

int tinhTongChuSo(int n) {
  int sum = 0; // Biến lưu tổng chữ số

  while (n > 0) {
    sum += n % 10; // Lấy chữ số cuối và cộng vào tổng
    n /= 10;       // Bỏ chữ số cuối
  }

  return sum;
}

int main() {
  int n;
  cout << "Nhap so nguyen duong n: ";
  cin >> n;

  if (n < 1) {
    cout << "Vui long nhap so nguyen duong!" << endl;
  } else {
    cout << "Tong cac chu so cua " << n << " la: " << tinhTongChuSo(n) << endl;
  }

  return 0;
}
