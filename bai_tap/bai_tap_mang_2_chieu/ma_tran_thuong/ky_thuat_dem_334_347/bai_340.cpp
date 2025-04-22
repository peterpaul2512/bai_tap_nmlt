// Bài 340: Đếm số lượng số âm trên 1 cột trong ma trận các số thực
#include <iostream>
using namespace std;

void inputMatrix(float matrix[100][100], int &rows, int &cols);

void printMatrix(float matrix[100][100], int rows, int cols);

int countNegativeNumbers(float matrix[100][100], int rows, int cols, int col);

int main() {
    float matrix[100][100];
    int rows, cols;

    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);

    int col;
    cout << "Enter column to count negative numbers: ";
    cin >> col;
    if (col < 0 || col >= cols) {
        cout << "Invalid column" << endl;
        return 0;
    }
    int count = countNegativeNumbers(matrix, rows, cols, col);
    cout << "Number of negative numbers in column " << col << ": " << count << endl;

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

int countNegativeNumbers(float matrix[100][100], int rows, int cols, int col) {
    int count = 0;
    for (int i = 0; i < rows; i++) {
        if (matrix[i][col] < 0) {
            count++;
        }
    }
    return count;
}
