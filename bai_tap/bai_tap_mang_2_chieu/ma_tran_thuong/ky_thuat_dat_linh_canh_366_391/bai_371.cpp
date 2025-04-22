// Bài 371: Liệt kê các dòng có chứa max
#include <iostream>
using namespace std;

void inputMatrix(int matrix[100][100], int &rows, int &cols);

void printMatrix(int matrix[100][100], int rows, int cols);

void listRowHasMax(int matrix[100][100], int rows, int cols);

int main() {
    int matrix[100][100];
    int rows, cols;

    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);

    listRowHasMax(matrix, rows, cols);

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

void listRowHasMax(int matrix[100][100], int rows, int cols) {
    int max = matrix[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }

    cout << "List row has max: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == max) {
                cout << "Row " << i << " has max" << endl;
                break;
            }
        }
    }
}
