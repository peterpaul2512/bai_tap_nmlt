//  Bài 401: Xóa 1 cột trong ma trận
#include <iostream>
using namespace std;

void inputMatrix(int matrix[100][100], int &rows, int &cols);

void printMatrix(int matrix[100][100], int rows, int cols);

void deleteCol(int matrix[100][100], int &rows, int &cols, int col);

int main() {
    int matrix[100][100];
    int rows, cols;

    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);

    int col;
    cout << "Enter column index to delete: ";
    cin >> col;
    deleteCol(matrix, rows, cols, col);
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

void deleteCol(int matrix[100][100], int &rows, int &cols, int col) {
    if (col < 0 || col >= cols) {
        cout << "Invalid column index" << endl;
        return;
    }
    for (int i = 0; i < rows; i++) {
        for (int j = col; j < cols - 1; j++) {
            matrix[i][j] = matrix[i][j + 1];
        }
    }
    cols--;
}
