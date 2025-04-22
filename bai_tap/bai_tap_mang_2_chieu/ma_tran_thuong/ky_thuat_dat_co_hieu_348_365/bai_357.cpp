// Bài 357: Liệt kê các dòng có chứa số nguyên tố trong ma trận các số nguyên
#include <iostream>
using namespace std;

void inputMatrix(int matrix[100][100], int &rows, int &cols);

void printMatrix(int matrix[100][100], int rows, int cols);

bool isPrime(int num);

void listPrimeRows(int matrix[100][100], int rows, int cols);

int main() {
    int matrix[100][100];
    int rows, cols;

    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);
    listPrimeRows(matrix, rows, cols);
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

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void listPrimeRows(int matrix[100][100], int rows, int cols) {
    cout << "List prime rows: " << endl;
    for (int i = 0; i < rows; i++) {
        bool isPrimeRow = false;
        for (int j = 0; j < cols; j++) {
            if (isPrime(matrix[i][j])) {
                isPrimeRow = true;
                break;
            }
        }
        if (isPrimeRow) {
            cout << "Row: " << i << endl;
            for (int j = 0; j < cols; j++) {
                cout << matrix[i][j] << "\t";
            }
        }
    }
}
