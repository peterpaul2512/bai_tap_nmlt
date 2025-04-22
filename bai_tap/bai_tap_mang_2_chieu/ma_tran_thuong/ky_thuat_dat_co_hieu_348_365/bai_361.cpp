// Bài 361: Liệt kê các dòng trong ma trận các số thực thỏa mãn đồng thời các điều kiện sau:
// dòng có chứa giá trị âm, giá trị 0 và giá trị dương
#include <iostream>
using namespace std;

void inputMatrix(float matrix[100][100], int &rows, int &cols);

void printMatrix(float matrix[100][100], int rows, int cols);

void listRows(float matrix[100][100], int rows, int cols);

int main() {
    float matrix[100][100];
    int rows, cols;

    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);
    listRows(matrix, rows, cols);

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

void listRows(float matrix[100][100], int rows, int cols) {
    cout << "List rows : " << endl;
    for (int i = 0; i < rows; i++) {
        bool hasNegative = false;
        bool hasZero = false;
        bool hasPositive = false;
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] < 0) {
                hasNegative = true;
            }
            if (matrix[i][j] == 0) {
                hasZero = true;
            }
            if (matrix[i][j] > 0) {
                hasPositive = true;
            }
        }
        if (hasNegative && hasZero && hasPositive) {
            cout << "Row " << i << ": ";
            for (int j = 0; j < cols; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
}
