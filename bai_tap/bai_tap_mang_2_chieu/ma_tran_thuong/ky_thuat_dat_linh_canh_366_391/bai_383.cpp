// Bài 383: Tìm số hoàn thiện nhỏ nhất
#include <iostream>
using namespace std;

void inputMatrix(int matrix[100][100], int &rows, int &cols);

void printMatrix(int matrix[100][100], int rows, int cols);

bool isPerfectNumber(int number);

int findPerfectNumber(int matrix[100][100], int rows, int cols);

int main() {
    int matrix[100][100];
    int rows, cols;

    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);

    int result = findPerfectNumber(matrix, rows, cols);
    if (result == -1) {
        cout << "No perfect number found in the matrix." << endl;
    } else {
        cout << "The smallest perfect number in the matrix is: " << result << endl;
    }

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

bool isPerfectNumber(int number) {
    int sum = 0;
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    return sum == number;
}

int findPerfectNumber(int matrix[100][100], int rows, int cols) {
    int minPerfectNumber = -1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (isPerfectNumber(matrix[i][j])) {
                if (minPerfectNumber == -1 || matrix[i][j] < minPerfectNumber) {
                    minPerfectNumber = matrix[i][j];
                }
            }
        }
    }
    return minPerfectNumber;
}
