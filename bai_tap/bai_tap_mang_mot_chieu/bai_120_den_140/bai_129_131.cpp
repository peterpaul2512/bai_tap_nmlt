//
// Created by Admin on 3/12/2025.
//
// ●	Bài 129 + 131: Viết hàm nhập, xuất mảng 1 chiều các số nguyên
#include <iostream>
using namespace std;

void nhapMangSoNguyen(int a[], int n);

void xuatMangSoNguyen(int a[], int n);

int main() {
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    int arr[n];
    nhapMangSoNguyen(arr, n);
    xuatMangSoNguyen(arr, n);
}

void nhapMangSoNguyen(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i << " : ";
        cin >> a[i];
    }
}

void xuatMangSoNguyen(int a[], int n) {
    cout << "Cac phan tu cua mang : ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
