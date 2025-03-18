//
// Created by Admin on 2/25/2025.
//
// Bài 59: Hãy kiểm tra số nguyên dương n có phải là số đối xứng hay không
#include <iostream>
using namespace std;

bool laSoDoiXung(int n) {
    int soGoc = n;
    int soDao = 0;

    while (n > 0) {
      int chuSo = n % 10;
      soDao = soDao * 10 + chuSo;
      n /= 10;
    }
    return soDao == soGoc;
}

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    if (n < 1) {
        cout << "Vui long nhap so nguyen duong!" << endl;
    } else {
        if (laSoDoiXung(n)) {
            cout << n << " la so doi xung." << endl;
        } else {
            cout << n << " khong phai so doi xung." << endl;
        }
    }

    return 0;
}