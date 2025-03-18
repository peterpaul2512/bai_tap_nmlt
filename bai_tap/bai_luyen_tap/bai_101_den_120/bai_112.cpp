//
// Created by Admin on 2/26/2025.
//
//Bài 112: Viết chương trình in ra hình chữ nhật có kích thước m x n
//a. Hình chữ nhật đặc
//b. Hình chữ nhật rỗng
#include <iostream>
using namespace std;

void veHinhChuNhatDac(int m, int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void veHinhChuNhatRong(int m, int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i == 1 || i == n || j == 1 || j == m) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int m, n;
    cout << "Nhap chieu dai m, n : ";
    cin >> m >> n;

    if (m <= 0 || n <= 0) {
        cout << "Phai la so nguyen duong!" << endl;
        return 1;
    }

    int choice;
    while (true) {
        cout << "1. Ve hinh chu nhat dac" << endl;
        cout << "2. Ve hinh chu nhat rong" << endl;
        cout << "0. Exit" << endl;
        cout << "Choose your choice :" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "1. Ve hinh chu nhat dac" << endl;
                veHinhChuNhatDac(m, n);
                break;
            case 2:
                cout << "2. Ve hinh chu nhat rong" << endl;
                veHinhChuNhatRong(m, n);
                break;
            case 0:
                cout << "Exit" << endl;
                exit(EXIT_SUCCESS);
            default:
                cout << "Invalid choice" << endl;
        }
    }
}
