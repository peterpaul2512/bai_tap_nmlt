//
// Created by Admin on 2/24/2025.
//
// Bài 43: Hãy đếm số lượng chữ số của số nguyên dương n
#include <iostream>
using namespace std;

int tinhS43(int n) {
    int count = 0;
    int power = 1;

    while (n / power != 0) {
        count++;
        power *= 10;
    }
\
    return count;
}

int main() {
    int n;
    cout << "Input n: ";
    cin >> n;

    if (n < 1) {
        cout << "Vui long nhap so nguyen duong n >= 1!" << endl;
    } else {
        cout << "So luong chu so = " << tinhS43(n) << endl;
    }
    return 0;
}