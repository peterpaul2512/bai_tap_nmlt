//
// Created by Admin on 3/15/2025.
//
// ●	Bài 233: Hãy liệt kê tần suất của các giá trị xuất hiện trong dãy. Lưu ý: mỗi giá trị liệt kêt tần suất 1 lần
#include <iostream>
using namespace std;

void lietKeTanSuat(int a[], int n);

int main() {
    int arr[] = {1, 2, 3, 4, 3, 2, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    lietKeTanSuat(arr, n);
}

void lietKeTanSuat(int a[], int n) {
    for (int i = 0; i < n; i++) {
        bool chuaThongKe = true;
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                chuaThongKe = false;
                break;
            }
        }
        if (chuaThongKe) {
            int dem = 0;
            for (int j = i; j < n; j++) {
                if (a[i] == a[j]) {
                    dem++;
                }
            }
            cout << "Phan tu: " << a[i] << " xuat hien: " << dem << endl;
        }
    }
}
