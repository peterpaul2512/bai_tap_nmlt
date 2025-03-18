//
// Created by Admin on 2/26/2025.
// Bài 107: Viết hàm tính S = CanBacN(x)
#include <iostream>
#include <cmath>
using namespace std;

double sqrtN(int x, int n) {
    double result = 0;
    if (n <= 0 || (n % 2 == 0 && x < 0)) {
        return 0;
    }
    if (n % 2 == 0) {
        if (x >= 0) {
            result = pow(x, 1.0 / n);
        } else {
            return 0;
        }
    } else {
        if (x > 0) {
            result = pow(x, 1.0 / n);
        } else if (x < 0) {
            result = -pow(-x, 1.0 / n);
        } else {
            result = 0;
        };
    }
    return result;
}

int main() {
    int x, n;
    cout << "Input x and n : ";
    cin >> x >> n;

    cout << "Ket qua la: " << sqrtN(x, n) << endl;
}
