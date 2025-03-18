//
// Created by Admin on 2/24/2025.
//
// Bài 28: Cho số nguyên dương n. Tính tổng các ước số nhỏ hơn chính nó
#include <iostream>
using namespace std;

void lietKeUocSo(int x){
    int sum = 0;
    cout << "Cac uoc so nho hon chinh no cua " << x << " la: ";
    for (int i = 1; i <= x; i++){
        if (x % i == 0 && i < x){
            cout << i << " ";
            sum += i;
        }
    }
    cout << endl;
    cout << "Tong cac uoc so: " << sum << endl;
}

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    lietKeUocSo(n);
    return 0;
}