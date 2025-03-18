//
// Created by Admin on 2/24/2025.
//
// Bài 31: Cho số nguyên dương n. Kiểm tra xem n có phải là số nguyên tố hay không
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
  if (n <= 1) return false;
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) return false;
  };
  return true;
}

int main() {
  int n;
  cout << "Nhap n: ";
  cin >> n;

  if (isPrime(n)) {
    cout << n << " is a prime number.\n";
  } else {
    cout << n << " is not a prime number.\n";
  }
}