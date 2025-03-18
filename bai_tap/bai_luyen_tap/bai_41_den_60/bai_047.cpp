//
// Created by Admin on 2/24/2025.
//
// Bài 47: Hãy tính tổng các chữ số chẵn của số nguyên dương n
#include <iostream>
using namespace std;

int tinhTongChuSo(int n) {
    int sum = 0;

    while (n > 0) {
        if ((n % 10) % 2 == 0) {
          sum += n % 10;
        }
        n /= 10;
    }

    return sum;
}

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    if (n < 1) {
        cout << "Vui long nhap so nguyen duong!" << endl;
    } else {
        cout << "Tong chu so chan cua " << n << " la: " << tinhTongChuSo(n) << endl;
    }

    return 0;
}