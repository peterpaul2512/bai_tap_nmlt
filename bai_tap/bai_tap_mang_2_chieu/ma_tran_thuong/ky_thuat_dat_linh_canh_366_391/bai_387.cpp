// Bài 387: Liệt kê các dòng có nhiều số chẵn nhất
#include <iostream>
using namespace std;

void inputMatrix(int matrix[100][100], int &rows, int &cols);

void printMatrix(int matrix[100][100], int rows, int cols);

void listEvenRow(int matrix[100][100], int rows, int cols);

int main() {
    int matrix[100][100];
    int rows, cols;

    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);

    listEvenRow(matrix, rows, cols);

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

void listEvenRow(int matrix[100][100], int rows, int cols) {
    int maxCountEven = 0;
    int countEven = 0;

    for (int i = 0; i < rows; i++) {
        countEven = 0;
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] % 2 == 0) {
                countEven++;
            }
        }
        if (countEven > maxCountEven) {
            maxCountEven = countEven;
        }
    }

    cout << "Lists of rows with most even : " << endl;
    for (int i = 0; i < rows; i++) {
        countEven = 0;
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] % 2 == 0) {
                countEven++;
            }
        }
        if (countEven == maxCountEven) {
            cout << "Row " << i << ": " << maxCountEven << endl;
        }
    }
}
