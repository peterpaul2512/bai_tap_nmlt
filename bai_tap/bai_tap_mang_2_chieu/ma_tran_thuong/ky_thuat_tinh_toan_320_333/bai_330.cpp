// Bài 330: Hãy biên đổi ma trận số thực bằng cách thay các giá trị bằng giá trị nguyên gần nó nhất
#include <iostream>
#include <cmath>
using namespace std;

void inputMatrix(float matrix[100][100], int &rows, int &cols);

void printMatrix(float matrix[100][100], int rows, int cols);

void replaceValues(float matrix[100][100], int rows, int cols);

int main() {
    float matrix[100][100];
    int rows, cols;
    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);
    replaceValues(matrix, rows, cols);
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

void replaceValues(float matrix[100][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = round(matrix[i][j]);
        }
    }
    printMatrix(matrix, rows, cols);
}
