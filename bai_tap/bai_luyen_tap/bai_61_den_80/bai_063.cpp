//
// Created by Admin on 2/25/2025.
//
// Bài 63: Cho 2 số nguyên dương a và b. Hãy tìm bội chung nhỏ nhất của 2 số này
#include <iostream>
using namespace std;

int BCNN (int a, int b) {
    int maxAB = a > b ? a : b;
    while (true){
      if (maxAB % a == 0 && maxAB % b == 0){
        return maxAB;
      }
      maxAB++;
    }
}

int main() {
    int a, b;
    cout << "Nhap hai so nguyen duong a va b: ";
    cin >> a >> b;

    if (a < 1 || b < 1) {
        cout << "Vui long nhap so nguyen duong!" << endl;
    } else {
        cout << "BCNN cua " << a << " va " << b << " la: " << BCNN(a, b) << endl;
    }

    return 0;
}
