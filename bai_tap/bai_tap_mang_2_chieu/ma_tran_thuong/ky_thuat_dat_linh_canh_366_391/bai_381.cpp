// Bài 381: Tìm giá trị xuất hiện nhiều nhất
#include <iostream>
using namespace std;

void inputMatrix(int matrix[100][100], int &rows, int &cols);

void printMatrix(int matrix[100][100], int rows, int cols);

int findMostFrequentValue(int matrix[100][100], int rows, int cols);

int main() {
    int matrix[100][100];
    int rows, cols;

    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);
    int mostFrequentValue = findMostFrequentValue(matrix, rows, cols);
    cout << "Gia tri xuat hien nhieu nhat trong ma tran la: " << mostFrequentValue << endl;

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

int findMostFrequentValue(int matrix[100][100], int rows, int cols) {
    int mostFrequentValue = matrix[0][0];
    int maxCount = 1;

    // Duyệt qua từng phần tử trong ma trận
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int count = 0;  // Đếm số lần xuất hiện của phần tử matrix[i][j]

            // Duyệt qua tất cả các phần tử để đếm số lần xuất hiện
            for (int k = 0; k < rows; k++) {
                for (int l = 0; l < cols; l++) {
                    if (matrix[i][j] == matrix[k][l]) {
                        count++;  // Nếu phần tử trùng, tăng biến count
                    }
                }
            }

            // Cập nhật giá trị xuất hiện nhiều nhất
            if (count > maxCount) {
                mostFrequentValue = matrix[i][j];
                maxCount = count;
            }
        }
    }

    return mostFrequentValue;
}

