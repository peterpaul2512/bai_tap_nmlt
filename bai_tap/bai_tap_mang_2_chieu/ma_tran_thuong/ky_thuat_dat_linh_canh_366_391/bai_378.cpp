// Bài 378: Tìm 1 chữ số xuất hiện nhiều nhất
#include <iostream>
using namespace std;

void inputMatrix(int matrix[100][100], int &rows, int &cols);

void printMatrix(int matrix[100][100], int rows, int cols);

int findMaxDigit(int matrix[100][100], int rows, int cols);

int main() {
    int matrix[100][100];
    int rows, cols;

    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);

    int maxDigit = findMaxDigit(matrix, rows, cols);
    if (maxDigit != -1) {
        cout << "Max digit: " << maxDigit << endl;
    } else {
        cout << "No digit" << endl;
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

int findMaxDigit(int matrix[100][100], int rows, int cols) {
    int digitCount[10] = {0}; // mảng đếm số lần xuất hiện của từng chữ số

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int num = abs(matrix[i][j]);
            while (num > 0) {
                int digit = num % 10;
                digitCount[digit]++; // tăng số lần xuất hiện của chữ số digit
                num /= 10;
            }
        }
    }

    int maxCount = 0; // số lần xuất hiện của chữ số lớn nhất
    int maxDigit = -1; // lưu trữ chữ số có số lần xuất hiện lớn nhất.

    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > maxCount) {
            maxCount = digitCount[i];
            maxDigit = i;
        }
    }
    return maxDigit;
}
