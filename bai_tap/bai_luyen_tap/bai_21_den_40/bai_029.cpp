//
// Created by Admin on 2/24/2025.
//
// Bài 29: Tìm ước số lẻ lớn nhất của số nguyên dương n. Ví dụ n = 100 ước lẻ lớn nhất là 25
#include <iostream>
using namespace std;

void lietKeUocSo(int x){
    int uocMax = 1;
    cout << "Cac uoc so cua " << x << " la: ";
    for (int i = 1; i <= x; i++){
        if (x % i == 0 && i %2 != 0){
            cout << i << " ";
            if (uocMax < i){
                uocMax = i;
            }
        }
    }
    cout << endl;
    cout << "Uoc lon nhat: " << uocMax << endl;
}

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    lietKeUocSo(n);
    return 0;
}