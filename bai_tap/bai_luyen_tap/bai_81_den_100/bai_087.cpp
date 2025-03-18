//
// Created by Admin on 2/26/2025.
// Bài 87: Tìm số nguyên dương n nhỏ nhất sao cho 1 + 2 + … + n > 10000
#include <iostream>
using namespace std;

int main() {
    int n = 1;
    while ((n * (n + 1)) / 2 <= 10000) {
        n++;
    }
    cout << "So n thoa man la: " << n << endl;
    return 0;
}
