// Bài 389: Liệt kê các dòng có nhiều số hoàn thiện nhất
#include <iostream>
using namespace std;

void inputMatrix(int matrix[100][100], int &rows, int &cols);

void printMatrix(int matrix[100][100], int rows, int cols);

bool isPerfectNumber(int num);

void listPerfectRows(int matrix[100][100], int rows, int cols);

int main() {
    int matrix[100][100];
    int rows, cols;

    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);
    listPerfectRows(matrix, rows, cols);

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

void listPerfectRows(int matrix[100][100], int rows, int cols) {
    int maxPerfectCount = 0;
    for (int i = 0; i < rows; i++) {
        int perfectCount = 0;
        for (int j = 0; j < cols; j++) {
            if (isPerfectNumber(matrix[i][j])) {
                perfectCount++;
            }
        }
        if (perfectCount > maxPerfectCount) {
            maxPerfectCount = perfectCount;
        }
    }

    cout << "Rows with the most perfect numbers: " << endl;
    for (int i = 0; i < rows; i++) {
        int perfectCount = 0;
        for (int j = 0; j < cols; j++) {
            if (isPerfectNumber(matrix[i][j])) {
                perfectCount++;
            }
        }
        if (perfectCount == maxPerfectCount) {
            cout << "Row " << i << ": " << maxPerfectCount << " perfect numbers" << endl;
        }
    }
}
