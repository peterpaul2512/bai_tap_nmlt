//
// Created by Admin on 2/26/2025.
// Bài 108: Viết hàm tính S = x^y
#include <iostream>
#include <cmath>
using namespace std;

double calculate(int x, int y) {
    return pow(x, y);
}

int main() {
    int x, y;
    cout << "Input x and y : ";
    cin >> x >> y;

    cout << "Ket qua la: " << calculate(x, y) << endl;
}
