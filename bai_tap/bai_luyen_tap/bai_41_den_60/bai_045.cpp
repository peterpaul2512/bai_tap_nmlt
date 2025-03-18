//
// Created by Admin on 2/24/2025.
//
// Bài 45: Hãy tính tích các chữ số của số nguyên dương n
#include <iostream>
using namespace std;

int tinhTongChuSo(int n) {
    int tich = 1;

    while (n > 0) {
        tich *= (n % 10);
        n /= 10;
    }

    return tich;
}

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    if (n < 1) {
        cout << "Vui long nhap so nguyen duong!" << endl;
    } else {
        cout << "Tich cac chu so cua " << n << " la: " << tinhTongChuSo(n) << endl;
    }

    return 0;
}
