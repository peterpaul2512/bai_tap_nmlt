//
// Created by Admin on 2/26/2025.
// Bài 91: In tất cả các số nguyên dương lẻ nhỏ hơn 100
#include <stdio.h>
# include <iostream>
using namespace std;

int main(){
  cout << "Cac so thoa man :";
  for (int i = 1; i < 100; i++){
    if (i % 2 != 0){
      cout << i << " ";
    }
  }
}
