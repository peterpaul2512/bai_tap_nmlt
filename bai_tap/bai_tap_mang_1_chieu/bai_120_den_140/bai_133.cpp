//
// Created by Admin on 3/12/2025.
//
// ●	Bài 133: Viết hàm liệt kê các vị trí mà giá trị tại đó là giá trị âm trong mảng 1 chiều các số thực
#include <iostream>
using namespace std;

void lietKeIndex(int a[], int n);

int main() {
    int arr[] = {10, -5, 23, 7, 0, -12, 8};
    int size = std::size(arr);

    lietKeIndex(arr, size);
}

void lietKeIndex(int a[], int n) {
    cout << "Cac vi tri am trong mang: " << endl;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            cout << i << " ";
        }
    }
}