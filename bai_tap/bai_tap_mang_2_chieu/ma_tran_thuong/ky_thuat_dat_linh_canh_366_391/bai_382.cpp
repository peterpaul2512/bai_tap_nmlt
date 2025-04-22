// Bài 382: Tìm số chính phương lớn nhất
#include <cmath>
#include <iostream>
using namespace std;

void inputMatrix(int matrix[100][100], int &rows, int &cols);

void printMatrix(int matrix[100][100], int rows, int cols);

int findLargestPerfectSquare(int matrix[100][100], int rows, int cols);

int main() {
    int matrix[100][100];
    int rows, cols;

    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);

    int largestPerfectSquare = findLargestPerfectSquare(matrix, rows, cols);
    if (largestPerfectSquare == -1) {
        cout << "No perfect square found" << endl;
    } else {
        cout << "Largest perfect square: " << largestPerfectSquare << endl;
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

int findLargestPerfectSquare(int matrix[100][100], int rows, int cols) {
    int largestPerfectSquare = -1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int num = matrix[i][j];
            int sqrtNum = sqrt(num);
            if (sqrtNum * sqrtNum == num) {
                if (num > largestPerfectSquare) {
                    largestPerfectSquare = num;
                }
            }
        }
    }
    return largestPerfectSquare;
}
