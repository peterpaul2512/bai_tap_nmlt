//
// Created by Admin on 2/24/2025.
//
// Bài 14: Tính S(n) = x + x^3 + x^5 + … + x^2n + 1

#include <cmath>
#include <iostream>
using namespace std;

int main() {
    double sum = 0.0;
    int x;
    int n;

    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += pow(x, (2*i + 1));
    }

    cout << "Tong la: " << sum << endl;
}