// Viết hàm tinh tong cac phan tu trên biên của N x M ma trận so nguyên
#include <iostream>
using namespace std;

void nhapMang(int a[100][100], int &row, int &col);

void xuatMang(int a[100][100], int row, int col);

int tinhTongBien(int a[100][100], int row, int col);

int main() {
    int a[100][100];
    int row, col;
    nhapMang(a, row, col);
    xuatMang(a, row, col);
    cout << "Tong cac phan tu tren bien la: " << tinhTongBien(a, row, col);
}

void nhapMang(int a[100][100], int &row, int &col) {
    cout << "Nhap so hang: ";
    cin >> row;
    cout << "Nhap so cot: ";
    cin >> col;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Nhap phan tu a[" << i << "][" << j << "]= ";
            cin >> a[i][j];
        }
    }
}

void xuatMang(int a[100][100], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

int tinhTongBien(int a[100][100], int row, int col) {
    int sum = 0;
    // tinh tong cac phan tu tren bien tren
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i == 0 || i == row - 1 || j == 0 || j == col - 1) {
                sum += a[i][j];
            }
        }
    }
    return sum;
}
