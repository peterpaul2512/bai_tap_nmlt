//Bài 325: Tính tích các số chẵn trên 1 cột trong ma trận các số nguyên
#include <iostream>
using namespace std;

void inputMatrix(int matrix[100][100], int &rows, int &cols);

void printMatrix(int matrix[100][100], int rows, int cols);

int calculateEvenProduct(int matrix[100][100], int rows, int col);

int main() {
    int matrix[100][100];
    int rows, cols;
    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);
    int col;
    cout << "Enter column to calculate: ";
    cin >> col;
    cout << "Sum: " << calculateEvenProduct(matrix, rows, col) << endl;
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

int calculateEvenProduct(int matrix[100][100], int rows, int col) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        if (matrix[i][col] % 2 == 0) {
            sum += matrix[i][col];
        }
    }
    return sum;
}
