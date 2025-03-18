//
// Created by Admin on 2/26/2025.
// Bài 89: Viết chương trình tính tổng các giá trị lẻ nguyên dương nhỏ hơn N
#include <iostream>
using namespace std;

int main(){
  int n;
  cout << "Nhap n: ";
  cin >> n;
  int sum = 0;

  for (int i = 1; i <= n; i++){
      if (i % 2 != 0){
        sum += i;
      }
  }
  cout << "Tong la: " << sum << endl;
}
