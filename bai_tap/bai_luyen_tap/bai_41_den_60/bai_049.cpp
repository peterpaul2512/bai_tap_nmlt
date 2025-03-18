//
// Created by Admin on 2/24/2025.
//
// Bài 49: Cho số nguyên dương n. Hãy tìm chữ số đầu tiên của n
#include <iostream>
using namespace std;

int timChuSoDau(int num) {
    int chuSoDau = 0;
    int power = 1;
    while (num / power != 0) {
        power *= 10;
    }
    power /= 10;
    chuSoDau = num / power;
    return chuSoDau;
}

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    if (n < 1) {
        cout << "Vui long nhap so nguyen duong!" << endl;
    } else {
        cout << "Chu so dau tien cua " << n << " la: " << timChuSoDau(n) << endl;
    }

    return 0;
}
