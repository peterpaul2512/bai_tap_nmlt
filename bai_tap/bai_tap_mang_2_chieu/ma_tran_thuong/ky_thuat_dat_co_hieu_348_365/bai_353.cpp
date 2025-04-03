// Bài 353: Kiểm tra một cột ma trận có giảm dần hay không
#include <iostream>
using namespace std;

bool isColumnDescending(int matrix[][3], int rows, int colIndex);

int main() {
    const int rows = 3;
    const int cols = 3;

    int matrixInt[rows][cols] = {
        {6, 7, 4},
        {-3, 5, 9},
        {28, 2, 25}
    };

    int colIndex;
    cout << "Enter the column number to check (0-based index): ";
    cin >> colIndex;

    if (isColumnDescending(matrixInt, rows, colIndex)) {
        cout << "Column " << colIndex << " is in descending order." << endl;
    } else {
        cout << "Column " << colIndex << " is not in descending order." << endl;
    }
    return 0;
}

bool isColumnDescending(int matrix[][3], int rows, int colIndex) {
    for (int i = 0; i < rows - 1; i++) {
        if (matrix[i][colIndex] <= matrix[i + 1][colIndex]) {
            return false;
        }
    }
    return true;
}
