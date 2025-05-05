// Viet ham dem so luong phan tu duong nam tren bien của ma tran N x M
#include <iostream>
using namespace std;

void nhapMaTran(int arr[100][100], int &row, int &col);

void xuatMaTran(int arr[100][100], int row, int col);

void demBienDuong(int arr[100][100], int row, int col);

int main() {
    int arr[100][100];
    int row, col;
    nhapMaTran(arr, row, col);
    xuatMaTran(arr, row, col);
    demBienDuong(arr, row, col);
    return 0;
}

void nhapMaTran(int arr[100][100], int &row, int &col) {
    cout << "Nhap so hang: ";
    cin >> row;
    cout << "Nhap so cot: ";
    cin >> col;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Nhap a[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }
}

void xuatMaTran(int arr[100][100], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

void demBienDuong(int arr[100][100], int row, int col) {
    int count = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i == 0 || i == row - 1 || j == 0 || j == col - 1) {
                if (arr[i][j] > 0) {
                    count++;
                }
            }
        }
    }
    cout << "So luong phan tu duong nam tren bien cua ma tran: " << count;
}
