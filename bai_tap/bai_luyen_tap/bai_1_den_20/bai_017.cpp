//
// Created by Admin on 2/24/2025.
//
// Bài 17: Tính S(n) = x + x^2/2! + x^3/3! + … + x^n/N!

#include <cmath>
#include <iostream>
using namespace std;

double tinhMu(int a, int b){
    return pow(a, b);
}

int tinhGiaiThua(int a){
  int result = 1;
  for(int i = 1; i <= a; i++){
    result = result * i;
  }
  return result;
}

double tinhS17(int x, int n){
  double result = 0.0;
  for(int i = 1; i <= n; i++){
    result += tinhMu(x, i)/tinhGiaiThua(i);
  }
  return result;
}

int main() {
  int x;
  int n;
  double sum = 0.0;

  cout << "Enter x: ";
  cin >> x;
  cout << "Enter n: ";
  cin >> n;

  cout << "Result: " << tinhS17(x, n) << endl;
}