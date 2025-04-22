// Bài 324: Tính tổng các giá trị dương trên 1 dòng trong ma trận các số thực
#include <iostream>
using namespace std;

void inputMatrix(float matrix[100][100], int &rows, int &cols);

void printMatrix(float matrix[100][100], int rows, int cols);

float sumOfPositiveValues(float matrix[100][100], int rows, int cols, int row);

int main() {
    float matrix[100][100];
    int rows, cols;

    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);

    int row;
    cout << "Enter row to be summed: ";
    cin >> row;
    cout << "Sum of positive values in row " << row << ": " << sumOfPositiveValues(matrix, rows, cols, row) << endl;
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

float sumOfPositiveValues(float matrix[100][100], int rows, int cols, int row) {
    float sum = 0;
    for (int j = 0; j < cols; j++) {
        if (matrix[row][j] > 0) {
            sum += matrix[row][j];
        }
    }
    return sum;
}
