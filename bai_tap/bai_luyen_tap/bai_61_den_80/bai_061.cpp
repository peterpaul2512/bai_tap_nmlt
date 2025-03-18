//
// Created by Admin on 2/25/2025.
//
// Bài 61: Hãy kiểm tra các chữ số của số nguyên dương n có giảm dần từ trái sang phải hay không
#include <iostream>
using namespace std;

bool laSoGiamDan(int n) {
    bool flag = true;
    int temp = 0;

    while (n > 0) {
        int chuSo = n % 10;
        if (chuSo > temp ) {
            temp = chuSo;
        } else {
            flag = false;
            break;
        }
        n /= 10;
    }
    return flag;
}

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    if (n < 1) {
        cout << "Vui long nhap so nguyen duong!" << endl;
    } else {
        if (laSoGiamDan(n)) {
            cout << n << " la so giam tu trai qua phai." << endl;
        } else {
            cout << n << " khong phai la so giam tu trai qua phai." << endl;
        }
    }

    return 0;
}