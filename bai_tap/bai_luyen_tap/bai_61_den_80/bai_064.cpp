//
// Created by Admin on 2/25/2025.
//
// Bài 64: Giải phương trình bậc 1 : ax + b = 0
#include <iostream>
using namespace std;

double giaiPhuongTrinh(int a, int b){
  return -1.0 * b/a;
}

int main() {
  int a, b;
  cout << "Please enter two integers a, b: ";
  cin >> a >> b;

  if (a == 0 ) {
    cout << " a cannot be zero";
  } else {
    cout << "Ket qua x = " << giaiPhuongTrinh(a, b);
  }
}