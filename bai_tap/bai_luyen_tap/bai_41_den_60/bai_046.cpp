//
// Created by Admin on 2/24/2025.
//
// Bài 46: Hãy đếm số lượng chữ số lẻ của số nguyên dương n
#include <iostream>
using namespace std;

int tinhTongChuSo(int n) {
    int count = 0;

    while (n > 0) {
        if ((n % 10) % 2 != 0) {
            count++;
        }
        n /= 10;
    }

    return count;
}

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    if (n < 1) {
        cout << "Vui long nhap so nguyen duong!" << endl;
    } else {
        cout << "So chu so le cua " << n << " la: " << tinhTongChuSo(n) << endl;
    }

    return 0;
}
