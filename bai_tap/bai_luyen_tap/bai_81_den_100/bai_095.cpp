//
// Created by Admin on 2/26/2025.
// Bài 95: Viết chương trình nhập 3 số thực. Hãy thay tất cả các số âm bằng trị tuyệt đối của nó
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;
    cout << "Input a, b, c: ";
    cin >> a >> b >> c;

    if (a < 0) {
        a = abs(a);
    }
    if (b < 0) {
        b = abs(b);
    }
    if (c < 0) {
        c = abs(c);
    }
    cout << "a=" << a << ", b=" << b << ", c=" << c << endl;
}
