// Bài 360: Liệt kê các cột trong ma trận các số nguyên có chứa số chính phương
#include <cmath>
#include <iostream>
using namespace std;

void inputMatrix(int matrix[100][100], int &rows, int &cols);

void printMatrix(int matrix[100][100], int rows, int cols);

bool isPerfectSquare(int num);

void listPerfectSquareCols(int matrix[100][100], int rows, int cols);

int main() {
    int matrix[100][100];
    int rows, cols;

    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);
    listPerfectSquareCols(matrix, rows, cols);

    return 0;
}

void inputMatrix(int matrix[100][100], int &rows, int &cols) {
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

void printMatrix(int matrix[100][100], int rows, int cols) {
    cout << "Matrix elements: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t"; // thêm tab
        }
        cout << endl;
    }
}

bool isPerfectSquare(int num) {
    int sqrtNum = sqrt(num);
    return sqrtNum * sqrtNum == num;
}

void listPerfectSquareCols(int matrix[100][100], int rows, int cols) {
    cout << "List cols have perfect square value: " << endl;
    for (int j = 0; j < cols; j++) {
        bool isPerfectSquareCol = false;
        for (int i = 0; i < rows; i++) {
            if (isPerfectSquare(matrix[i][j])) {
                isPerfectSquareCol = true;
                break;
            }
        }

        if (isPerfectSquareCol) {
            cout << "Col " << j << endl;
            for (int i = 0; i < rows; i++) {
                cout << matrix[i][j] << "\t";
            }
            cout << endl;
        }
    }
}
