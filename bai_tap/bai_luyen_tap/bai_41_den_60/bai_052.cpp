//
// Created by Admin on 2/25/2025.
//
// Bài 52: Tìm chữ số nhỏ nhất của số nguyên dương n
#include <iostream>
using namespace std;

int tinhS52(int n) {
    int min = 9;
    while (n > 0) {
        int chuSo = n%10;
        if (chuSo < min) {
            min = chuSo;
        }
        n = n/10;
    }
    return min;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n < 1) {
        cout << "Vui long nhap so nguyen duong!" << endl;
    } else {
        cout << "So nho nhat trong " << n << " la: " << tinhS52(n) << endl;
    }

    return 0;
}