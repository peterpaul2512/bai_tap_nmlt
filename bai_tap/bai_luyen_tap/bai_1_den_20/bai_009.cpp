//
// Created by Admin on 2/22/2025.
//
// Bài 9: Tính T(n) = 1 x 2 x 3…x N

#include <iostream>
using namespace std;

int main() {
  int sum = 1;
  int n;
  cout << "Enter n: " << endl;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    sum = sum*i;
  }
  cout << "Sum is: " << sum << endl;
}