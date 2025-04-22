// Bài 358: Liệt kê các dòng có chứa giá trị chẵn trong ma trận các số nguyên
#include <iostream>
using namespace std;

void inputMatrix(int matrix[100][100], int &rows, int &cols);

void printMatrix(int matrix[100][100], int rows, int cols);

void listEvenRows(int matrix[100][100], int rows, int cols);

int main() {
    int matrix[100][100];
    int rows, cols;

    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);
    listEvenRows(matrix, rows, cols);

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

void listEvenRows(int matrix[100][100], int rows, int cols) {
    cout << "List rows have even value: " << endl;
    for (int i = 0; i < rows; i++) {
        bool isEven = false;
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] % 2 == 0) {
                isEven = true;
                break;
            }
        }
        if (isEven) {
            cout << "Row " << i << ": ";
            for (int j = 0; j < cols; j++) {
                cout << matrix[i][j] << "\t";
            }
        }
    }
}
