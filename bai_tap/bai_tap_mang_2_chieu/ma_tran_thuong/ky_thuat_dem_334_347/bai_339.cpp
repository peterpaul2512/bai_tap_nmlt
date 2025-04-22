// Bài 339: Đếm số lượng số hoàn thiện trên 1 hàng trong ma trận các số nguyên
#include <iostream>
using namespace std;

void inputMatrix(int matrix[100][100], int &rows, int &cols);

void printMatrix(int matrix[100][100], int rows, int cols);

bool isPerfectNumber(int num);

int countPerfectNumbersInLine(int matrix[100][100], int rows, int cols, int row);

int main() {
    int matrix[100][100];
    int rows, cols;

    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);

    int row;
    cout << "Enter row to count perfect numbers: ";
    cin >> row;
    int count = countPerfectNumbersInLine(matrix, rows, cols, row);
    cout << "Number of perfect numbers in row " << row << ": " << count << endl;

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

bool isPerfectNumber(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int countPerfectNumbersInLine(int matrix[100][100], int rows, int cols, int row) {
    int count = 0;
    for (int j = 0; j < cols; j++) {
        if (isPerfectNumber(matrix[row][j])) {
            count++;
        }
    }
    return count;
}
