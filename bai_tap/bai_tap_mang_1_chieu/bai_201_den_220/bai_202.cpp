// ●	Bài 202: Tính tổng các giá trị có chữ số đầu tiên là chữ số lẻ trong mảng 1 chiều các số nguyên
#include <iostream>
#include <cmath>
using namespace std;

int timChuSoDauTien(int num);

int tinhTong(int a[], int n);

int main() {
    int arr[] = {2, 3, 12, 25, 45, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = tinhTong(arr, n);
    cout << "Tong can tim la: " << sum << endl;
}

int timChuSoDauTien(int num) {
    num = abs(num);
    if (num < 10) {
        return num;
    }
    while (num >= 10) {
        num = num / 10;
    }
    return num;
}

int tinhTong(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int chuSoDauTien = timChuSoDauTien(a[i]);
        if (chuSoDauTien % 2 != 0) {
            sum += a[i];
        }
    }
    return sum;
}
