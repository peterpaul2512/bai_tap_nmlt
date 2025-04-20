// Bai 392: Hoán vị 2 dòng trên ma trận
#include <iostream>
using namespace std;

void inputMatrix(int matrix[100][100], int &rows, int &cols);

void printMatrix(int matrix[100][100], int rows, int cols);

void swapRow(int matrix[100][100], int rows, int cols, int row1, int row2);

int main() {
    int matrix[100][100];
    int rows, cols;
    int row1, row2;

    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);
    cout << "Enter row1: ";
    cin >> row1;
    cout << "Enter row2: ";
    cin >> row2;
    swapRow(matrix, rows, cols, row1, row2);
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

void swapRow(int matrix[100][100], int rows, int cols, int row1, int row2) {
    if (row1 < 0 || row1 >= rows || row2 < 0 || row2 >= rows) {
        cout << "Invalid row indices" << endl; // Inform the user about invalid indices
        return;
    }
    for (int j = 0; j < cols; j++) {
        int temp = matrix[row1][j];
        matrix[row1][j] = matrix[row2][j];
        matrix[row2][j] = temp;
    }
}