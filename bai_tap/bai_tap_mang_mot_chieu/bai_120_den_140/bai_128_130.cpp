//
// Created by Admin on 3/12/2025.
//
// ●	Bài 128 + 130: Viết hàm nhập, xuất mảng 1 chiều các số thực
#include <iostream>
using namespace std;

void nhapMangSoThuc(float arr[], int n);
void xuatMangSoThuc(float arr[], int n);

int main() {
  int n;
  cout << "Nhap so phan tu: ";
  cin >> n;

  float arr[n];
  nhapMangSoThuc(arr, n);
  xuatMangSoThuc(arr, n);
}

void nhapMangSoThuc(float arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << "Nhap phan tu thu " << i << " : ";
    cin >> arr[i];
    cout << endl;
  }
}
void xuatMangSoThuc(float arr[], int n) {
  cout << "Cac phan tu cua mang: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}