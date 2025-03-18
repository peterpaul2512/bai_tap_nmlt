//
// Created by Admin on 2/26/2025.
// Bài 82: Viết chương trình tìm số lớn nhất trong 3 số thực a, b, c

#include <iostream>
using namespace std;

int findMaxNumber(int a, int b, int c){
  if(a>b && a>c){
    return a;
  } else if(b>a && b>c){
    return b;
  } else {
    return c;
  }
}

int main() {
  int a, b, c;
  cout << "Input a, b, c: ";
  cin >> a >> b >> c;

  cout << "Max number is " << findMaxNumber(a, b, c) << endl;
}