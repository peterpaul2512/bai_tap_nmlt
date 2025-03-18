//
// Created by Admin on 2/24/2025.
//
// Bài 20: Liệt kê tất cả các “ước số” của số nguyên dương n

#include <iostream>
using namespace std;

void lietKeUocSo(int x){
  cout << "Cac uoc so cua " << x << " la: ";
  for (int i = 1; i <= x; i++){
    if (x % i == 0){
      cout << i << " ";
    }
  }
}

int main() {
  int n;
  cout << "Nhap so nguyen duong n: ";
  cin >> n;
  lietKeUocSo(n);
  return 0;
}