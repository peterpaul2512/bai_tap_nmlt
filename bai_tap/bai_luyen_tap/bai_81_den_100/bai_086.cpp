//
// Created by Admin on 2/26/2025.
// Bài 86: Tính S(n) = 1^3 + 2^3 + … + N^3
#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n;
  cout << "Input n ( n>=1 ) : ";
  cin >> n;

  int sum = 0;

  for (int i = 1; i <= n; i++){
    sum += pow(i, 3);
  }
  cout << "Tong S = " << sum << endl;
}