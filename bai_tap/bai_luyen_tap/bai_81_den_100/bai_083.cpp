//
// Created by Admin on 2/26/2025.
// Bài 83: Viết chương trình nhập 2 số thực, kiểm tra xem chúng có cùng dấu hay không
#include <iostream>
using namespace std;

bool isCungDau(int a, int b){
    if (a * b > 0){
      return true;
    } else {
      return false;
    }
}

int main() {
    int a, b;
    cout << "Input a, b: ";
    cin >> a >> b;

    if (isCungDau(a, b)){
      cout << "Cung dau" << endl;
    } else {
      cout << "Khong cung dau" << endl;
    }
}