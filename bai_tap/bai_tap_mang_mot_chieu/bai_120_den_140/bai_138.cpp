//
// Created by Admin on 3/12/2025.
//
// ●	Bài 138: Tìm vị trí của giá trị chẵn đầu tiên trong mảng 1 chiều các số nguyên. Nếu mảng không có giá trị chẵn thì sẽ trả về -1

#include <iostream>
using namespace std;

int timViTriSoChanDauTien(int a[], int n);

int main() {
    int arr[] = {10, -5, 23, 7, 0, -12, 8};
    int size = std::size(arr);
    cout << "Vi tri so chan dau tien: " << timViTriSoChanDauTien(arr, size) << endl;
}

int timViTriSoChanDauTien(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            return i;
        }
    }
    return -1;
}
