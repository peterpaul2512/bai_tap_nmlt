//
// Created by Admin on 2/26/2025.
// Bài 85: Nhập vào tháng của 1 năm. Cho biết tháng thuộc quý mấy trong năm
# include <iostream>
using namespace std;

int timQuy(int a) {
    switch (a) {
        case 1:
        case 2:
        case 3:
            return 1;
        case 4:
        case 5:
        case 6:
            return 2;
        case 7:
        case 8:
        case 9:
            return 3;
        case 10:
        case 11:
        case 12:
            return 4;
        default:
            cout << "error" << endl;
            return 0;
    }
}

int main() {
    int a;
    cout << "Nhap 1 thang trong nam: ";
    cin >> a;

    if (a < 1 || a > 12) {
        cout << "Thang khong hop le !";
    } else {
        cout << "Thang " << a << " thuoc quy: " << timQuy(a);
    }
}
