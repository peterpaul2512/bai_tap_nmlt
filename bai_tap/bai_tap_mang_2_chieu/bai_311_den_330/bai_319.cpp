// Bài 319: Viết hàm sắp xếp ma trận các số thực tăng dần từ trên xuống dưới và từ trái sang phải
#include <iostream>
using namespace std;

void inputMatrix(float matrix[100][100], int &rows, int &cols);

void printMatrix(float matrix[100][100], int rows, int cols);

void hoanVi(float &a, float &b);

void sapXepMaTran(float matrix[100][100], int rows, int cols);

int main() {
    float matrix[100][100];
    int rows, cols;

    inputMatrix(matrix, rows, cols);

    cout << "Matrix before sort: \n";
    printMatrix(matrix, rows, cols);

    sapXepMaTran(matrix, rows, cols);

    cout << "Matrix after sort: \n";
    printMatrix(matrix, rows, cols);

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

void hoanVi(float &a, float &b) {
    float temp = a;
    a = b;
    b = temp;
}

void sapXepMaTran(float matrix[100][100], int rows, int cols) {
    // Bước 1: Chuyển ma trận thành mảng 1 chiều
    float temp[10000];  // Mảng tạm chứa các phần tử của ma trận
    int index = 0;

    // Lấy tất cả các phần tử từ ma trận vào mảng tạm
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            temp[index++] = matrix[i][j];
        }
    }

    // Bước 2: Sắp xếp mảng tạm theo thứ tự tăng dần bằng Selection Sort
    for (int i = 0; i < index - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < index; j++) {
            if (temp[j] < temp[minIndex]) {
                minIndex = j;
            }
        }
        hoanVi(temp[i], temp[minIndex]);
    }

    // Bước 3: Chuyển lại mảng tạm đã sắp xếp vào ma trận
    index = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = temp[index++];
        }
    }
}
