//
// Created by Admin on 2/26/2025.
//
//Bài 111: Viết chương trình in ra tam giác cân có độ cao h
//a. Tam giác cân đặc nằm giữa màn hình
//b. Tam giác cân rỗng nằm giữa màn hình
//c. Tam giác vuông cân đặc
//d. Tam giác vuông cân rỗng
#include <iostream>
#include <cstdlib>
using namespace std;

void veTamGiacCanDac(int h) {
    for (int i = 0; i < h; i++) {
        // In khoảng trắng trước mỗi hàng để tạo hình tam giác cân
        for (int j = 0; j < h - i - 1; j++) {
            cout << " ";
        }
        // In ký tự * cho tam giác đặc
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void veTamGiacCanRong(int h) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < h - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            if (j == 0 || j == 2 * i || i == h - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void veTamGiacVuongCanDac(int h) {
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void veTamGiacVuongRong(int h) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i || i == h - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int h;
    cout << "Nhap chieu cao tam giac: ";
    cin >> h;

    if (h <= 0) {
        cout << "Chieu cao phai la so nguyen duong!" << endl;
        return 1;
    }

    int choice;
    while (true) {
        cout << "1. Ve tam giac can dac nam giua man hinh" << endl;
        cout << "2. Ve tam giac can rong nam giua man hinh" << endl;
        cout << "3. Ve tam giac vuong can dac" << endl;
        cout << "4. Ve tam giac vuong can rong" << endl;
        cout << "0. Exit" << endl;
        cout << "Choose your choice :" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "1. Ve tam giac can dac nam giua man hinh" << endl;
                veTamGiacCanDac(h);
                break;
            case 2:
                cout << "2. Ve tam giac can rong nam giua man hinh" << endl;
                veTamGiacCanRong(h);
                break;
            case 3:
                cout << "3. Ve tam giac vuong can dac" << endl;
                veTamGiacVuongCanDac(h);
                break;
            case 4:
                cout << "4. Ve tam giac vuong can rong" << endl;
                veTamGiacVuongRong(h);
                break;
            case 0:
                cout << "Exit" << endl;
                exit(EXIT_SUCCESS);
            default:
                cout << "Invalid choice" << endl;
        }
    }
}
