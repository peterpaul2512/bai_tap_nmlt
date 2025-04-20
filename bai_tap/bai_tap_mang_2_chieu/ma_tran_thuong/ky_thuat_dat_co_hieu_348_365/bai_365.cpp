// Bài 365: Cho 2 ma trận A và B. Đếm số lần xuất hiện của ma trận A trong ma trận B
#include <iostream>
using namespace std;

void inputMatrix(int matrix[100][100], int &rows, int &cols);

void printMatrix(int matrix[100][100], int rows, int cols);

int countMatrix(int matrixA[100][100], int rowsA, int colsA, int matrixB[100][100], int rowsB, int colsB);

int main() {
    int matrixA[100][100];
    int rowsA, colsA;
    int matrixB[100][100];
    int rowsB, colsB;

    inputMatrix(matrixA, rowsA, colsA);
    printMatrix(matrixA, rowsA, colsA);

    inputMatrix(matrixB, rowsB, colsB);
    printMatrix(matrixB, rowsB, colsB);

    int count = countMatrix(matrixA, rowsA, colsA, matrixB, rowsB, colsB);
    cout << "So lan xuat hien cua ma tran A trong ma tran B la: " << count << endl;
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

int countMatrix(int matrixA[100][100], int rowsA, int colsA, int matrixB[100][100], int rowsB, int colsB) {
    if (rowsA <= 0 || colsA <= 0 || rowsB <= 0 || colsB <= 0) {
        return 0;
    }
    int count = 0;
    for (int iB = 0; iB < rowsB; iB++) {
        for (int jB = 0; jB < colsB; jB++) {
            // kiem tra a co la con cua b tai vi tri iB, jB
            bool laCon = true;
            for (int iA = 0; iA < rowsA && laCon; iA++) {
                for (int jA = 0; jA < colsA; jA++) {
                    if (matrixA[iA][jA] != matrixB[iB + iA][jB + jA]) {
                        laCon = false;
                        break;
                    }
                }
            }
            if (laCon) {
                count++;
            }
        }
    }
    return count;
}
