// Bài 380: Đếm số lượng chẵn nhỏ nhất
#include <iostream>
using namespace std;

void inputMatrix(int matrix[100][100], int &rows, int &cols);

void printMatrix(int matrix[100][100], int rows, int cols);

int countEven(int matrix[100][100], int rows, int cols);

int main() {
    int matrix[100][100];
    int rows, cols;

    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);
    int evenCount = countEven(matrix, rows, cols);
    cout << "So luong chan nho nhat la: " << evenCount << endl;
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

int countEven(int matrix[100][100], int rows, int cols) {
    int count = 0;
    int minEven = -1;

    // Find the smallest even number in the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] % 2 == 0) {
                if (minEven == -1 || matrix[i][j] < minEven) {
                    minEven = matrix[i][j];
                }
            }
        }
    }

    if (minEven == -1) {
        return 0;
    }

    // Count occurrences of the smallest even number
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == minEven) {
                count++;
            }
        }
    }

    return count;
}
