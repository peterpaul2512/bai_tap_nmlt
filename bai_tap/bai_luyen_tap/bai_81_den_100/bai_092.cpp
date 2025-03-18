//
// Created by Admin on 2/26/2025.
// Bài 92: Tìm ước số chung lớn nhất của 2 số nguyên dương
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Nhap a, b: ";
    cin >> a >> b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    cout << "UCLN la : " << a << endl;
}
