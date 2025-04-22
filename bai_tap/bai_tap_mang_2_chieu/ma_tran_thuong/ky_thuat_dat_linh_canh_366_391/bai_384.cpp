// Bài 384: Tìm các chữ số xuất hiện nhiều nhất trong ma trận
#include <iostream>
using namespace std;

void inputMatrix(int matrix[100][100], int &rows, int &cols);

void printMatrix(int matrix[100][100], int rows, int cols);

void listMostFrequentNumber(int matrix[100][100], int rows, int cols);

int main() {
    int matrix[100][100];
    int rows, cols;

    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);

    listMostFrequentNumber(matrix, rows, cols);

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

void listMostFrequentNumber(int matrix[100][100], int rows, int cols) {
    int maxCount = 0;
    int mostFrequentNumbers[10000]; // Mảng để lưu các số có số lần xuất hiện nhiều nhất
    int mostFrequentCount = 0; // Đếm số lượng các số có số lần xuất hiện nhiều nhất

    // Duyệt qua tất cả các phần tử trong ma trận
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int count = 0;
            int num = matrix[i][j];

            // Đếm số lần xuất hiện của num trong ma trận
            for (int k = 0; k < rows; k++) {
                for (int l = 0; l < cols; l++) {
                    if (matrix[k][l] == num) {
                        count++;
                    }
                }
            }

            // Nếu số lần xuất hiện của num lớn hơn maxCount
            if (count > maxCount) {
                maxCount = count;
                mostFrequentNumbers[0] = num; // Cập nhật mảng với số có số lần xuất hiện nhiều nhất
                mostFrequentCount = 1; // Chỉ có một số hiện tại
            }
            // Nếu số lần xuất hiện của num bằng maxCount, thêm nó vào mảng nếu chưa có
            else if (count == maxCount) {
                bool exists = false;
                for (int i = 0; i < mostFrequentCount; i++) {
                    if (mostFrequentNumbers[i] == num) {
                        exists = true;
                        break;
                    }
                }
                if (!exists) {
                    mostFrequentNumbers[mostFrequentCount] = num;
                    mostFrequentCount++;
                }
            }
        }
    }

    // In ra tất cả các số có số lần xuất hiện nhiều nhất
    cout << "Most frequent numbers: ";
    for (int i = 0; i < mostFrequentCount; i++) {
        cout << mostFrequentNumbers[i] << " ";
    }
    cout << endl;
}
