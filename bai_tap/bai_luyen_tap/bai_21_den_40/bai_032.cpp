//
// Created by Admin on 2/24/2025.
//
//Bài 32: Cho số nguyên dương n. Kiểm tra xem n có phải là số chính phương hay không
#include <iostream>
#include <cmath>
using namespace std;

bool laSoChinhPhuong(int a){
  if (a < 1) return false;
  int m = sqrt(a);
  return (m*m == a);
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    if (laSoChinhPhuong(n)){
      cout << n << " la so chinh phuong." << endl;
    } else {
      cout << n << " khong la so chinh phuong." << endl;
    }
}