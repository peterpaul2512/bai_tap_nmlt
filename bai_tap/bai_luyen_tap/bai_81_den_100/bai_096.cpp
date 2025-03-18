//
// Created by Admin on 2/26/2025.
// Bài 96: Viết chương trình nhập giá trị x sau tính giá trị của hàm số
// f(x) = 2x^2 + 5x + 9 khi x >= 5, f(x) = -2x^2 + 4x – 9 khi x < 5
#include <iostream>
using namespace std;

void solveF1(int x) {
    double result = (2.0 * x * x) + 5 * x + 9;
    cout << "Result: " << result << endl;
}

void solveF2(int x) {
    double result = (-2 * x * x) + 4 * x - 9;
    cout << "Result: " << result << endl;
}

int main() {
    int choice;
    int x;
    cout << "Input your choice : \n 1. f(x) = 2x^2 + 5x + 9 \n 2. f(x) = -2x^2 + 4x - 9" << endl;
    cin >> choice;

    cout << "You choose: " << choice << endl;

    switch (choice) {
        case 1:
            cout << "Input the value of x ( x >= 5 ): ";
            cin >> x;
            if (x < 5) {
                cout << "X must >= 5, try again ..." << endl;
            }
            solveF1(x);
            return 0;
        case 2:
            cout << "Input the value of x ( x < 5 ): ";
            cin >> x;
            if (x >= 5) {
                cout << "X must >= 5, try again ..." << endl;
            }
            solveF2(x);
            return 0;
        default:
            cout << "Invalid Choice" << endl;
            return 0;
    }
}
