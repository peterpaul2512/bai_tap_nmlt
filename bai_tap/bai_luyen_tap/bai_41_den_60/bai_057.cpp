//
// Created by Admin on 2/25/2025.
//
// Bài 57: Hãy kiểm tra số nguyên dương n có toàn chữ số chẵn hay không
#include <iostream>
using namespace std;

void tinhS57(int n) {
    bool isEven = true;
    while (n > 0) {
        int chuSo = n%10;
        if (chuSo % 2 != 0) {
          isEven = false;
          break;
        }
        n = n/10;
    }
    if (isEven) {
      cout<<" Is Even"<<endl;
    } else {
      cout<<" Is Not Even"<<endl;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n < 1) {
        cout << "Vui long nhap so nguyen duong!" << endl;
    } else {
        tinhS57(n);
    }

    return 0;
}