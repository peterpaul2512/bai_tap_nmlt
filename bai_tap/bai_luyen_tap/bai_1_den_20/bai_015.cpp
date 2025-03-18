//
// Created by Admin on 2/24/2025.
//
// Bài 15: Tính S(n) = 1/1 + 1/(1 + 2) + 1/ (1 + 2 + 3) + ….. + 1/ (1 + 2 + 3 + …. + N)

#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0.0;
    cout << "Nhap n: ";
    cin >> n;
    int sumMau = 0;
    for (int i = 1; i <= n; i++) {
        sumMau += i;
        sum += 1.0/sumMau;
    }
    cout << "Tong la: " << sum << endl;
    return 0;
}