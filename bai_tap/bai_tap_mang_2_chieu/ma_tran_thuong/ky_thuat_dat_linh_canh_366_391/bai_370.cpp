// Bài 370: Tìm giá trị âm lớn nhất trong ma trận
#include <iostream>
using namespace std;

void inputMatrix(int matrix[100][100], int &rows, int &cols);

void printMatrix(int matrix[100][100], int rows, int cols);

int findMaxNegative(int matrix[100][100], int rows, int cols, int &iMax, int &jMax);

int main() {
    int matrix[100][100];
    int rows, cols;

    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);

    int iMax = -1;
    int jMax = -1;

    int result = findMaxNegative(matrix, rows, cols, iMax, jMax);
    if (iMax != -1) {
        cout << "The largest negative number in the matrix is: " << result << endl;
    } else {
        cout << "There is no negative number in the matrix." << endl;
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

int findMaxNegative(int matrix[100][100], int rows, int cols, int &iMax, int &jMax) {
    int maxNegative = 0;
    // Tìm số âm đầu tiên
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] < 0) {
                maxNegative = matrix[i][j];
                iMax = i;
                jMax = j;
                break;
            }
        }
    }

    if (maxNegative == 0) {
        return 0; // Không có số âm nào
    }

    // Tìm số âm lớn hơn
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] < 0 && matrix[i][j] > maxNegative) {
                maxNegative = matrix[i][j];
                iMax = i;
                jMax = j;
            }
        }
    }
    return maxNegative;
}
