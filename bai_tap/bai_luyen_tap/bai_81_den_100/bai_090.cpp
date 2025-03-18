//
// Created by Admin on 2/26/2025.
//Bài 90: Viết chương trình tìm số nguyên dương m lớn nhất sao cho 1 + 2 + … + m < N
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    if (n <= 1) {
        cout << "Khong co m thoa man (n phai > 1)" << endl;
        return 0;
    }

    int m = 0;

    while ((m * (m + 1)) / 2 < n) {
        m++;
    }
    m--;
    cout << "So m thoa man la: " << m << endl;
    return 0;
}
