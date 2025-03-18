//
// Created by Admin on 3/13/2025.
//
// ●	Bài 147: Tìm số dương cuối cùng trong mảng số thực. Nếu mảng không có giá trị dương thì trả về  -1
#include <iostream>
using namespace std;

float timSoDuongCuoi(float a[], int n);

int main() {
    float arr[] = {-3.5, 2.1, -7.8, 4.6, -1.2, 0.0, 5.9, -9.4, 8.3, -6.7};
    int n = std::size(arr);
    cout << "So Duong Cuoi Mang: " << timSoDuongCuoi(arr, n) << endl;
}

float timSoDuongCuoi(float a[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] > 0) {
            return a[i];
        }
    }
    return -1;
}
