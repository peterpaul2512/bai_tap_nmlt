// Bài 402: Xoay ma trận 1 góc 90 độ
#include <iostream>
using namespace std;

void inputMatrix(int matrix[100][100], int &rows, int &cols);

void printMatrix(int matrix[100][100], int rows, int cols);

void rotateMatrix(int matrix[100][100], int &rows, int &cols);

int main() {
    int matrix[100][100];
    int rows, cols;
    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);
    rotateMatrix(matrix, rows, cols);
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

void rotateMatrix(int matrix[100][100], int &rows, int &cols) {
    int newRows = cols;
    int newCols = rows;
    int newMatrix[100][100];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            newMatrix[j][rows - 1 - i] = matrix[i][j];
        }
    }
    printMatrix(newMatrix, newRows, newCols);
}
