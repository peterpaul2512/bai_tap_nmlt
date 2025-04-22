// Bài 328: Tính trung bình nhân các số dương trong ma trận các số thực
#include <iostream>
#include <cmath>
using namespace std;

void inputMatrix(float matrix[100][100], int &rows, int &cols);

void printMatrix(float matrix[100][100], int rows, int cols);

float tinhTrungBinhNhanSoDuong(float matrix[100][100], int rows, int cols);

int main() {
    float matrix[100][100];
    int rows, cols;

    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);

    cout << "Trung binh nhan so duong: " << tinhTrungBinhNhanSoDuong(matrix, rows, cols);
    return 0;
}

void inputMatrix(float matrix[100][100], int &rows, int &cols) {
    cout << "Enter matrix rows: ";
    cin >> rows;
    cout << "Enter matrix cols: ";
    cin >> cols;

    if (rows <= 0 || cols <= 0 || rows > 100 || cols > 100) {
        cout << "Invalid input" << endl;
        return;
    }

    cout << "Enter matrix elements: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter matrix[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(float matrix[100][100], int rows, int cols) {
    cout << "Matrix elements: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t"; // thêm tab
        }
        cout << endl;
    }
}

float tinhTrungBinhNhanSoDuong(float matrix[100][100], int rows, int cols) {
    float sum = 1;
    int count = 0;
    bool coSoDuong = false;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > 0) {
                coSoDuong = true;
                sum *= matrix[i][j];
                count++;
            }
        }
    }
    if (coSoDuong) {
        return pow(sum, 1.0 / count);
    } else {
        return 0;
    }
}
