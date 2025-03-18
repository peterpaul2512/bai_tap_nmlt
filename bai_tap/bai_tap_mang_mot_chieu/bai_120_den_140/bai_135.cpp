//
// Created by Admin on 3/12/2025.
//
// ●	Bài 135: Viết hàm tìm giá trị dương đầu tiên trong mảng 1 chiều các số thực. Nếu mảng không có giá trị dương thì trả về -1
#include <iostream>
using namespace std;

float timSoDuongDauTien(float a[], int n);

int main() {
    float arr[] = {-3.5, 2.1, -7.8, 4.6, -1.2, 0.0, 5.9, -9.4, 8.3, -6.7};
    int size = std::size(arr);
    cout << "So duong dau tien: " << timSoDuongDauTien(arr, size);
}

float timSoDuongDauTien(float a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            return a[i];
        }
    }
    return -1;
}
