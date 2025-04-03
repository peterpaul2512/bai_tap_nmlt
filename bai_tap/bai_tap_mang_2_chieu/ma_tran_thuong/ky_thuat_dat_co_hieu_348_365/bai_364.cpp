// Bài 364: Cho 2 ma trận A và B. Kiểm tra xem ma trận A có là ma trận con của ma trận B hay không

#include <iostream>
using namespace std;

bool isSubMatrix(int A[][3], int rowsA, int colsA, int B[][4], int rowsB, int colsB);

int main() {
    // Ma trận A 2x3
    int A[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Ma trận B 4x4
    int B[4][4] = {
        {6, 7, 3, 1},
        {2, 1, 2, 3},
        {5, 4, 5, 6},
        {9, 4, 5, 2}
    };

    // Kiểm tra A có là ma trận con của B không
    if (isSubMatrix(A, 2, 3, B, 4, 4)) {
        cout << "Matrix A is a sub-matrix of Matrix B." << endl;
    } else {
        cout << "Matrix A is not a sub-matrix of Matrix B." << endl;
    }

    return 0;
}

// Kiểm tra ma trận A có là ma trận con của ma trận B hay không
bool isSubMatrix(int A[][3], int rowsA, int colsA, int B[][4], int rowsB, int colsB) {
    // Duyệt qua các phần tử của ma trận B để tìm vị trí bắt đầu của ma trận con
    for (int i = 0; i <= rowsB - rowsA; i++) {
        for (int j = 0; j <= colsB - colsA; j++) {
            bool match = true;

            // Kiểm tra phần tử của ma trận A với ma trận B
            for (int k = 0; k < rowsA; k++) {
                for (int l = 0; l < colsA; l++) {
                    if (A[k][l] != B[i + k][j + l]) {
                        match = false;
                        break;
                    }
                }
                if (!match) break;
            }

            // Nếu tìm được đoạn con khớp, trả về true
            if (match) return true;
        }
    }

    return false; // Nếu không tìm được ma trận con, trả về false
}
