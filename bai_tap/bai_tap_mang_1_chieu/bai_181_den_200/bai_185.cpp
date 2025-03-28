// Bài 185: Hãy liệt kê các vị trí mà giá trị tại đó là số chính phương trong mảng 1 chiều các số nguyên
#include <iostream>
#include <cmath>
using namespace std;

bool laSoChinhPhuong(int n);

void lietKe(int a[], int n);

int main() {
    int arr[] = {2, 4, 3, 1, 8, 6, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Cac vi tri thoa man : ";
    lietKe(arr, n);
}

bool laSoChinhPhuong(int n) {
    return pow(sqrt(n), 2) == n;
}

void lietKe(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (laSoChinhPhuong(a[i])) {
            cout << i << " ";
        }
    }
}
