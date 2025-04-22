// Bài 352: Kiểm tra một hàng ma trận có tăng dần hay không
#include <iostream>
using namespace std;

void inputMatrix(int matrix[100][100], int &rows, int &cols);

void printMatrix(int matrix[100][100], int rows, int cols);

bool isIncreasingRow(int matrix[100][100], int rows, int cols, int row);

int main() {
    int matrix[100][100];
    int rows, cols;

    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);

    int row;
    cout << "Enter row to check: ";
    cin >> row;
    if (isIncreasingRow(matrix, rows, cols, row)) {
        cout << "Row " << row << " is increasing" << endl;
    } else {
        cout << "Row " << row << " is not increasing" << endl;
    }

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

bool isIncreasingRow(int matrix[100][100], int rows, int cols, int row) {
    if (row < 0 || row >= rows) {
        cout << "Invalid row" << endl;
        return false;
    }
    for (int j = 0; j < cols - 1; j++) {
        if (matrix[row][j] >= matrix[row][j + 1]) {
            return false;
        }
    }
    return true;
}
