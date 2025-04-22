// Bài 338: Đếm số lượng số dương trên 1 hàng trong ma trận các số thực
#include <iostream>
using namespace std;

void inputMatrix(float matrix[100][100], int &rows, int &cols);

void printMatrix(float matrix[100][100], int rows, int cols);

int countPositiveNumbersInLine(float matrix[100][100], int rows, int cols, int row);

int main() {
    float matrix[100][100];
    int rows, cols;

    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);

    int row;
    cout << "Enter row to count positive numbers: ";
    cin >> row;
    int count = countPositiveNumbersInLine(matrix, rows, cols, row);
    cout << "Number of positive numbers in row " << row << ": " << count << endl;

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

int countPositiveNumbersInLine(float matrix[100][100], int rows, int cols, int row) {
    int count = 0;
    for (int j = 0; j < cols; j++) {
        if (matrix[row][j] > 0) {
            count++;
        }
    }
    return count;
}
