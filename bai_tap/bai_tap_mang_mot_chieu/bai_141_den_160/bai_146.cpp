//
// Created by Admin on 3/13/2025.
//
// ●	Bài 146: Tìm giá trị âm đầu tiên trong mảng 1 chiều các số thực. Nếu mảng không có giá trị âm thì trả về -1
#include <iostream>
using namespace std;

float timGiaTriAmDauTien(float a[], int n);

int main() {
    float arr[] = {-3.5, 2.1, -7.8, 4.6, -1.2, 0.0, 5.9, -9.4, 8.3, -6.7};
    int n = std::size(arr);
    cout << "Gia Tri Am Dau Tien: " << timGiaTriAmDauTien(arr, n);
}

float timGiaTriAmDauTien(float a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            return a[i];
        }
    }
    return -1;
}
