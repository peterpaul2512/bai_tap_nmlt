//
// Created by Admin on 2/25/2025.
// Bài 78: Liệt kê tất cả các ước số của số nguyên dương n
#include <iostream>
#include <cmath>
using namespace std;

void lietKeUocSo(int n) {
    cout << "Cac uoc so cua " << n << " la : " << endl;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
        if (i != n / i) {
            cout << n / i << " ";
        }
    }
}

int main() {
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;

    if (n < 1) {
        cout << "Vui long nhap so nguyen duong!" << endl;
    } else {
        lietKeUocSo(n);
    }
    return 0;
}
