//
// Created by Admin on 2/25/2025.
//
// Bài 54: Hãy đếm số lượng chữ số nhỏ nhất của số nguyên dương n
#include <iostream>
using namespace std;

void tinhS54(int n) {
    int min = 9;
    int count = 0;
    while (n > 0) {
        int chuSo = n%10;
        if (chuSo < min) {
            min = chuSo;
            count = 1;
        } else if (chuSo == min) {
            count++;
        }
        n = n/10;
    }
    cout << "Min is: " << min << " - so luong is: " << count << endl;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n < 1) {
        cout << "Vui long nhap so nguyen duong!" << endl;
    } else {
        tinhS54(n);
    }

    return 0;
}