//
// Created by Admin on 2/24/2025.
//
// Bài 16: Tính S(n) = x + x^2/1 + 2 + x^3/(1 + 2 + 3) + … + x^n/(1 + 2 + 3 + …. + N)

#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int x;
    int n;
    double sum = 0.0;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;
    int sumMau = 0;
    for (int i = 1; i <= n; i++) {
        sumMau += i;
        sum += pow(x,i)/sumMau;
    }
    cout << "Tong la: " << sum << endl;
    return 0;
}