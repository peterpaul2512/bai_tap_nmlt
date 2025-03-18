//
// Created by Admin on 2/25/2025.
// Bài 75: Kiểm tra số nguyên 4 byte có dạng 2^k hay không
#include <iostream>
using namespace std;

bool laLuyThua2(int n) {
    if (n <= 0) return false;
    while (n % 2 == 0) {
        n = n / 2;
    }
    return n == 1;
}


int main() {
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;

    if (laLuyThua2(n)) {
        cout << n << " la luy thua cua 2.\n";
    } else {
        cout << n << " khong phai luy thua cua 2.\n";
    }

    return 0;
}
