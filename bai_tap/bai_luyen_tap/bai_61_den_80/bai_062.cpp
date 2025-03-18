//
// Created by Admin on 2/25/2025.
//
// Bài 62: Cho 2 số nguyên dương a và b. Hãy tìm ước chung lớn nhất của 2 số này.
#include <iostream>
using namespace std;

int UCLN (int a, int b) {
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

int main() {
    int a, b;
    cout << "Nhap hai so nguyen duong a va b: ";
    cin >> a >> b;

    if (a < 1 || b < 1) {
        cout << "Vui long nhap so nguyen duong!" << endl;
    } else {
        cout << "UCLN cua " << a << " va " << b << " la: " << UCLN(a, b) << endl;
    }

    return 0;
}