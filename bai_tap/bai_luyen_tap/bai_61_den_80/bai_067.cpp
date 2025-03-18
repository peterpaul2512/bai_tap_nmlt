//
// Created by Admin on 2/25/2025.
//
//Bài 67: Tính S(x, n) = x – x^2 + x^3 + … + (-1)^n+1 * x^n
#include <iostream>
#include <cmath>
using namespace std;

void tinhS67(int x, int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += pow(-1, i + 1) * pow(x, i);
  }
  cout << endl;
  cout << "Tong la: " << sum << endl;
}

int main() {
  int x, n;
  cout << "Enter number x, n: ";
  cin >> x >> n;

  if (x < 1 || n < 1) {
    cout << "Invalid input ( must >= 1 )" << endl;
  } else {
    tinhS67(x, n);
  }
}