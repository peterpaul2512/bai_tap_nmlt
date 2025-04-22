// Bài 336: Đếm tần suất xuất hiện của 1 giá trị x trong ma trận các số thực
#include <iostream>
using namespace std;

void inputMatrix(float matrix[100][100], int &rows, int &cols);

void printMatrix(float matrix[100][100], int rows, int cols);

int countValue(float matrix[100][100], int rows, int cols, float value);

int main() {
    float matrix[100][100];
    int rows, cols;

    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);

    float value;
    cout << "Enter value to be searched: ";
    cin >> value;

    cout << "So lan xuat hien cua " << value << " la: " << countValue(matrix, rows, cols, value) << endl;

    return 0;
}

void inputMatrix(float matrix[100][100], int &rows, int &cols) {
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

void printMatrix(float matrix[100][100], int rows, int cols) {
    cout << "Matrix elements: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t"; // thêm tab
        }
        cout << endl;
    }
}

int countValue(float matrix[100][100], int rows, int cols, float value) {
    int count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == value) {
                count++;
            }
        }
    }
    return count;
}
