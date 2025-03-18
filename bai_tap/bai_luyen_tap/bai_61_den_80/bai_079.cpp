//
// Created by Admin on 2/25/2025.
// Bài 79: Hãy đếm số lượng chữ số của số nguyên dương n
#include <iostream>
#include <cmath>
using namespace std;

void demSoLuongChuSo(int n) {
    int count = 0;
    int power = 1;
    cout << "So luong chu so cua " << n << " la : ";
    while (n / power != 0) {
        count++;
        power *= 10;
    }
    cout << count << endl;
}

int main() {
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;

    if (n < 1) {
        cout << "Vui long nhap so nguyen duong!" << endl;
    } else {
        demSoLuongChuSo(n);
    }
    return 0;
}
