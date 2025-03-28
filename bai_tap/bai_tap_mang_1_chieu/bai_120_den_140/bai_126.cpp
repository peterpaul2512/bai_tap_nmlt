//
// Created by Admin on 3/12/2025.
//
// ●	Bài 126: Viết hàm tính tổng các giá trị âm trong mảng 1 chiều các số thực
#include <iostream>
using namespace std;

float tinhTong(float arr[], int n);

int main() {
    float arr[] = {-3.5, 2.1, -7.8, 4.6, -1.2, 0.0, 5.9, -9.4, 8.3, -6.7};
    int size = std::size(arr);
    cout << "Size: " << size << endl;
    cout << "Tong la: " << tinhTong(arr, size) << endl;
}

float tinhTong(float arr[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            sum += arr[i];
        }
    }
    return sum;
}
