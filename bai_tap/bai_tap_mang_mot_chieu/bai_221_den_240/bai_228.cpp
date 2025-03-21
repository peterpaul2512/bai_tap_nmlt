// Bài 228: Hãy xác định số lượng phần tử kề nhau mà số đứng sau cùng dấu số đứng trước và có giá trị tuyệt đối lớn hơn
#include <iostream>
#include <cmath>
using namespace std;

int demSoThoaMan(int a[], int n);

int main() {
    int arr[] = {1, -2, 3, -4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "So luong thoa man de bai: " << demSoThoaMan(arr, n) << endl;
}

int demSoThoaMan(int a[], int n) {
    int count = 0;
    for (int i = 1; i < n - 1; i++) {
        bool dieukien = (a[i + 1] * a[i - 1] > 0) && (abs(a[i + 1]) > abs(a[i - 1]));
        if (dieukien) {
            count++;
        }
    }
    return count;
}
