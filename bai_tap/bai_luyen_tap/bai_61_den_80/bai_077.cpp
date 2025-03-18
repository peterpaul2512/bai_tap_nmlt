//
// Created by Admin on 2/25/2025.
// Bài 77: Viết chương trình tính tổng của dãy số sau: S(n) = 1 + 2 + 3 + … + n
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;

    double sum = (n*(n+1))/2;
    cout << "Tong la: " << sum << endl;\
    return 0;
}
