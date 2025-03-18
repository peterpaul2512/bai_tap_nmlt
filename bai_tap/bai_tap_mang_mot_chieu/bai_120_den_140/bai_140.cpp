//
// Created by Admin on 3/12/2025.
//
// ●	Bài 140: Hãy tìm giá trị dương nhỏ nhất trong mảng 1 chiều các số thực. Nếu mảng không có giá trị dương thì sẽ trả về -1
#include <iostream>
using namespace std;

float soDuongNhoNhat(float a[], int n);

int main() {
    float arr[] = {-3.5, 2.1, -7.8, 4.6, -1.2, 0.0, 5.9, -9.4, 8.3, -6.7};
    int size = std::size(arr);
    cout << "So duong nho nhat : " << soDuongNhoNhat(arr, size);
}

float soDuongNhoNhat(float a[], int n) {
    float min = 9;
    bool flag = false;
    for (int i = 1; i < n; i++) {
        if (a[i] < min && a[i] > 0) {
            min = a[i];
            flag = true;
        }
    }
    if (flag) {
        return min;
    }
    return -1;
}
