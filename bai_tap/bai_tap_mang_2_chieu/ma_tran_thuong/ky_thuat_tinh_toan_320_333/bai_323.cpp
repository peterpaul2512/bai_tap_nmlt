// Bài 323: Tính tích các giá trị dương trên 1 cột trong ma trận các số thực
#include <iostream>
using namespace std;

void inputMatrix(float matrix[100][100], int &rows, int &cols);

void printMatrix(float matrix[100][100], int rows, int cols);

void tichDuongMotCot(float matrix[100][100], int rows, int cols);

int main() {
    float matrix[100][100];
    int rows, cols;

    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);
    tichDuongMotCot(matrix, rows, cols);
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

void tichDuongMotCot(float matrix[100][100], int rows, int cols) {
    for (int i = 0; i < cols; i++) {
        int tich = 1;
        for (int j = 0; j < rows; j++) {
            if (matrix[j][i] > 0) {
                tich *= matrix[j][i];
            }
        }
        cout << "Tich cot : " << i << " : " << tich << endl;
    }
}
