//
// Created by Admin on 2/25/2025.
//
// Bài 56: Hãy kiểm tra số nguyên dương n có toàn chữ số lẻ hay không
#include <iostream>
using namespace std;

void tinhS58(int n) {
    bool isOdd = true;
    while (n > 0) {
        int chuSo = n%10;
        if (chuSo % 2 == 0) {
            isOdd = false;
            break;
        }
        n = n/10;
    }
    if (isOdd) {
        cout<<" Is Odd"<<endl;
    } else {
        cout<<" Is Not Odd"<<endl;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n < 1) {
        cout << "Vui long nhap so nguyen duong!" << endl;
    } else {
        tinhS58(n);
    }

    return 0;
}