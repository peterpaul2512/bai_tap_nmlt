#include <iostream>
using namespace std;

int main() {
    int rows = 3;
    int cols = 3;

    int matrixInt[rows][cols] = {
        {6, 7, 4},
        {-3, 5, 9},
        {28, 2, 25}
    };

    float matrixFloat[rows][cols] = {
        {1.5, -2.5, 3.0},
        {4.5, 16.0, 2.25},
        {-3.2, 7.7, 12.8}
    };

    // Hiển thị ma trận số nguyên
    cout << "Integer Matrix (3x3):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrixInt[i][j] << "\t";
        }
        cout << endl;
    }

    // Hiển thị ma trận số thực
    cout << "\nFloat Matrix (3x3):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrixFloat[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
