//
// Created by Admin on 2/24/2025.
//
// Bài 50: Hãy tìm số đảo ngược của số nguyên dương n ( N = 1234 -> M = 4321 )
#include <iostream>
using namespace std;

int soDaoNguoc(int num) {
    int soDao = 0;

    while (num > 0) {
        int chuSo = num % 10;
        soDao = soDao * 10 + chuSo;
        num /= 10;
    }
    return soDao;
}

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    if (n < 1) {
        cout << "Vui long nhap so nguyen duong!" << endl;
    } else {
        cout << "So dao nguoc cua " << n << " la: " << soDaoNguoc(n) << endl;
    }

    return 0;
}
