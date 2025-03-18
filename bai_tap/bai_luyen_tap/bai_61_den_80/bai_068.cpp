//
// Created by Admin on 2/25/2025.
//
// Bài 68: Tính S(x, n) = -x^2 + x^4 + … + (-1)^n * x^2n
#include <iostream>
#include <cmath>
using namespace std;

void tinhS68(int x, int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += pow(-1, i) * pow(x, 2*i);
    }
    cout << endl;
    cout << "Tong la: " << sum << endl;
}

int main() {
    int x, n;
    cout << "Enter number x, n: ";
    cin >> x >> n;

    if (x < 1 || n < 1) {
        cout << "Invalid input ( must >= 1 )" << endl;
    } else {
        tinhS68(x, n);
    }
}