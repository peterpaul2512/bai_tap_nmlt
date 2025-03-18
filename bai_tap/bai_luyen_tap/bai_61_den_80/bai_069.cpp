//
// Created by Admin on 2/25/2025.
//
// Bài 69: Tính S(x, n) = (-1)^0x – x^3 + x^5 + … + (-1)^n * x^2n+1
#include <iostream>
#include <cmath>
using namespace std;

void tinhS69(int x, int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += pow(-1, i) * pow(x, 2 * i + 1);
    }
    cout << "Tong la: " << sum << endl;
}

int main() {
    int x, n;
    cout << "Enter number x, n: ";
    cin >> x >> n;

    if (n < 0) {
        cout << "Invalid input (n must >= 0)" << endl;
    } else {
        tinhS69(x, n);
    }
    return 0;
}
