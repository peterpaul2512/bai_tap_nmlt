//
// Created by Admin on 2/25/2025.
//
// Bài 65: Giải phương trình bậc 2 : ax^2 + bx + c = 0
#include <iostream>
#include <cmath>
using namespace std;

void giaiPhuongTrinhBac2(int a, int b, int c) {
    double delta = b * b - 4 * a * c;
    double x1, x2;
    if (delta < 0) {
        cout << "Phuong trinh vo nghiem";
    } else if (delta == 0) {
        x1 = x2 = (-1.0 * b) / (2 * a);
        cout << "Phuong trinh co nghiem kep x1=x2= " << x1 << endl;
    } else if (delta > 0) {
        x1 = ((-1 * b) - sqrt(delta)) / (2 * a);
        x2 = ((-1 * b) + sqrt(delta)) / (2 * a);
        cout << "Pt co 2 nghiem phan biet: x1 = " << x1 << " , x2 = " << x2 << endl;
    }
}

int main() {
    int a, b, c;
    cout << "Please enter a, b, c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << " a cannot be zero";
    } else {
        giaiPhuongTrinhBac2(a, b, c);
    }
}
