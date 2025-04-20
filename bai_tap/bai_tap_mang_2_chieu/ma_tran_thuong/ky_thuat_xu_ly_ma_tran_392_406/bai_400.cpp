// Bài 400: Xóa 1 dòng trong ma trận
#include <iostream>
using namespace std;

void inputMatrix(int matrix[100][100], int &rows, int &cols);

void printMatrix(int matrix[100][100], int rows, int cols);

void deleteRow(int matrix[100][100], int &rows, int cols, int row);

int main() {
    int matrix[100][100];
    int rows, cols;
    int row;
    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);
    cout << "Enter row to delete: ";
    cin >> row;
    deleteRow(matrix, rows, cols, row);
    printMatrix(matrix, rows, cols);
    return 0;
}

void inputMatrix(int matrix[100][100], int &rows, int &cols) {
    cout << "Enter matrix rows: ";
    cin >> rows;
    cout << "Enter matrix cols: ";
    cin >> cols;
    if (rows <= 0 || cols <= 0 || rows > 100 || cols > 100) {
        cout << "Invalid input" << endl;
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

void deleteRow(int matrix[100][100], int &rows, int cols, int row) {
    if (row < 0 || row >= rows) {
        cout << "Invalid row index" << endl;
        return;
    }
    // xóa dòng row
    for (int i = row; i < rows + row; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = matrix[i + 1][j];
        }
    }
    rows--;
}
