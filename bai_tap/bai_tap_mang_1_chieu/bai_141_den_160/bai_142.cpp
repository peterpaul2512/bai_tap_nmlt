//
// Created by Admin on 3/12/2025.
//
// ●	Bài 142: Tìm giá trị nhỏ nhất trong mảng 1 chiều số thực
#include <iostream>
using namespace std;

float findMinNumber(float a[], int n);

int main() {
    float arr[] = {-3.5, 2.1, -7.8, 4.6, -1.2, 0.0, 5.9, -9.4, 8.3, -6.7};
    int n = std::size(arr);
    float min = findMinNumber(arr, n);
    cout << "Minimum number is: " << min << endl;
}

float findMinNumber(float a[], int n) {
    float min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}
