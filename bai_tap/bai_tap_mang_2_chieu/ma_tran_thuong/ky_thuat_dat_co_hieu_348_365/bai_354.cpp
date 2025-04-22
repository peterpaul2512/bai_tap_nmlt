// Bài 354: Kiểm tra các giá trị trong ma trận có giảm dần theo dòng và cột hay không
#include <iostream>
using namespace std;

void inputMatrix(int matrix[100][100], int &rows, int &cols);

void printMatrix(int matrix[100][100], int rows, int cols);

bool checkDecrease(int matrix[100][100], int rows, int cols);

int main() {
    int matrix[100][100];
    int rows, cols;

    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);

    if (checkDecrease(matrix, rows, cols)) {
        cout << "All values in the matrix decrease by row and column" << endl;
    } else {
        cout << "Not all values in the matrix decrease by row and column" << endl;
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

bool checkDecrease(int matrix[100][100], int rows, int cols) {
    // Kiểm tra các giá trị trong ma trận có giảm dần theo dòng hay không
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols - 1; j++) {
            if (matrix[i][j] <= matrix[i][j + 1]) {
                return false;
            }
        }
    }
    // Kiểm tra các giá trị trong ma trận có giảm dần theo cột hay không
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows - 1; i++) {
            if (matrix[i][j] <= matrix[i + 1][j]) {
                return false;
            }
        }
    }
    return true;
}
