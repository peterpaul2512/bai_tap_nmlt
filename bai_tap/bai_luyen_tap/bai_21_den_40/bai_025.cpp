//
// Created by Admin on 2/24/2025.
//
// Bài 25: Tính tổng tất cả các “ước số chẵn” của số nguyên dương n
#include <iostream>
using namespace std;

void lietKeUocSo(int x){
    int sum=0;
    cout << "Cac uoc so chan cua " << x << " la: ";
    for (int i = 1; i <= x; i++){
        if (x % i == 0 && i%2 == 0){
            cout << i << " ";
            sum += i;
        }
    };
    cout << endl;
    cout << "Tong la: " << sum << endl;
}

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    lietKeUocSo(n);
    return 0;
}