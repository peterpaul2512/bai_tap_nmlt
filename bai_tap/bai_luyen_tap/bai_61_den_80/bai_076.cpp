//
// Created by Admin on 2/25/2025.
// Bài 76: Kiểm tra số nguyên 4 byte có dạng 3^k hay không
#include <iostream>
using namespace std;

bool laLuyThua3(int n) {
    if (n <= 0) return false;
    while (n % 3 == 0) {
        n = n / 3;
    }
    return n == 1;
}


int main() {
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;

    if (laLuyThua3(n)) {
        cout << n << " la luy thua cua 3.\n";
    } else {
        cout << n << " khong phai luy thua cua 3.\n";
    }

    return 0;
}