//
// Created by Admin on 2/26/2025.
// Bài 109: Viết chương trình in bảng cửu chương ra màn hình
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << "Bang cuu chuong " << i << endl;
        for (int j = 1; j <= 10; j++) {
            cout << i << "*" << j << " = " << i * j << endl;
        }
        cout << endl;
    }
}
