//
// Created by Admin on 3/13/2025.
//
// ●	Bài 153: Hãy tìm giá trị chẵn nhỏ nhất trong mảng 1 chiều các số nguyên. Nếu mảng không có số chẵn thì trả về -1
#include <iostream>
using namespace std;

int findMinEven(int a[], int n);

int main() {
    int arr[] = {6, -3, 28, 1, 50, -10, 11, 35, -7, 0, 2, 29};
    int n = std::size(arr);
    cout << "So chan nho nhat: " << findMinEven(arr, n) << endl;
}

int findMinEven(int a[], int n) {
    int min = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            if (min == -1 || a[i] < min) {
                min = a[i];
            }
        }
    }
    return min;
}
