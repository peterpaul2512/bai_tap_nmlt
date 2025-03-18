//
// Created by Admin on 2/24/2025.
//
// Bài 26: Tính tích tất cả các “ước số lẻ” của số nguyên dương n
#include <iostream>
using namespace std;

void lietKeUocSo(int x){
  int tich = 1;
    cout << "Cac uoc so le cua " << x << " la: ";
    for (int i = 1; i <= x; i++){
        if (x % i == 0 && i%2 != 0){
            cout << i << " ";
            tich *= i;
        }
    }
    cout << endl;
    cout << "Tich = " << tich << endl;
}

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    lietKeUocSo(n);
    return 0;
}