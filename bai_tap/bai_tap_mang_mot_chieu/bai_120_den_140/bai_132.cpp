//
// Created by Admin on 3/12/2025.
//
// ●	Bài 132: Viết hàm liệt kê các giá trị chẵn trong mảng 1 chiều các số nguyên
#include <iostream>
using namespace std;

void lietKeChan(int a[], int n);

int main() {
    int arr[] = {10, -5, 23, 7, 0, -12, 8};
    int size = std::size(arr);

    lietKeChan(arr, size);
}

void lietKeChan(int a[], int n) {
    cout << "Cac gia tri chan trong mang: " << endl;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            cout << a[i] << " ";
        }
    }
}
