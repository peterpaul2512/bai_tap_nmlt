//
// Created by Admin on 2/24/2025.
//
// Bài 48: Hãy tính tích các chữ số lẻ của số nguyên dương n
#include <iostream>
using namespace std;

int tinhTichChuSoLe(int n) {
    int tich = 1;
    bool coSoLe = false;

    while (n > 0) {
        int chuSo = n % 10;
        if (chuSo % 2 != 0) {
            tich *= chuSo;
            coSoLe = true;
        }
        n /= 10;
    }

    return coSoLe ? tich : 0;
}

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    if (n < 1) {
        cout << "Vui long nhap so nguyen duong!" << endl;
    } else {
        cout << "Tich chu so le cua " << n << " la: " << tinhTichChuSoLe(n) << endl;
    }

    return 0;
}