// Bài 359: Liệt kê các dòng có chứa giá trị âm trong ma trận các số thực
#include <iostream>
using namespace std;

void inputMatrix(float matrix[100][100], int &rows, int &cols);

void printMatrix(float matrix[100][100], int rows, int cols);

void listNegativeRows(float matrix[100][100], int rows, int cols);

int main() {
    float matrix[100][100];
    int rows, cols;

    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);
    listNegativeRows(matrix, rows, cols);

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

void listNegativeRows(float matrix[100][100], int rows, int cols) {
    cout << "List rows have negative value: " << endl;
    for (int i = 0; i < rows; i++) {
        bool isNegative = false;
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] < 0) {
                isNegative = true;
                break;
            }
        }
        if (isNegative) {
            cout << "Row " << i << ": ";
            for (int j = 0; j < cols; j++) {
                cout << matrix[i][j] << "\t";
            }
        }
    }
}
