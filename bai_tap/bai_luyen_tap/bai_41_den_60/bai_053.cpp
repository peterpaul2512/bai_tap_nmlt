//
// Created by Admin on 2/25/2025.
//
// Bài 53: Hãy đếm số lượng chữ số lớn nhất của số nguyên dương n
// N = 135254 => max = 5, sl = 2
#include <iostream>
using namespace std;

void tinhS53(int n) {
    int max = 0;
    int count = 0;
    while (n > 0) {
        int chuSo = n%10;
        if (chuSo > max) {
            max = chuSo;
            count = 1;
        } else if (chuSo == max) {
            count++;
        }
        n = n/10;
    }
    cout << "Max is: " << max << " - so luong is: " << count << endl;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n < 1) {
        cout << "Vui long nhap so nguyen duong!" << endl;
    } else {
        tinhS53(n);
    }

    return 0;
}