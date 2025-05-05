// Cho matrix NxM. Viết hàm đếm số lần xuất hiện của số lớn nhất trong mảng.
#include <iostream>
using namespace std;

void nhapMaTran(int arr[100][100], int &row, int &col);

void xuatMaTran(int arr[100][100], int row, int col);

int countMax(int arr[100][100], int row, int col);

int main() {
    int row, col;
    cout << "Nhap so hang: ";
    cin >> row;
    cout << "Nhap so cot: ";
    cin >> col;
    int arr[100][100];
    nhapMaTran(arr, row, col);
    xuatMaTran(arr, row, col);
    cout << "So lan xuat hien cua so lon nhat trong mang la: " << countMax(arr, row, col) << endl;
    return 0;
}

void nhapMaTran(int arr[100][100], int &row, int &col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Nhap a[" << i << "][" << j << "]: ";
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

int countMax(int arr[100][100], int row, int col) {
    int max = arr[0][0];
    int count = 0;
    // Tìm số lớn nhất trong ma trận
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    // Đếm số lần xuất hiện của số lớn nhất
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] == max) {
                count++;
            }
        }
    }
    return count;
}
