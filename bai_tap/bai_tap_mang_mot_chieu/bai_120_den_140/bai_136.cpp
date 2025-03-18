//
// Created by Admin on 3/12/2025.
//
// ●	Bài 136: Tìm số chẵn cuối cùng trong mảng 1 chiều các số nguyên. Nếu mảng không có giá trị chẵn thì trả về -1
#include <iostream>
using namespace std;

int timSoChanCuoiCung(int a[], int n);

int main() {
    int arr[] = {10, -5, 23, 7, 0, -12, 8};
    int size = std::size(arr);
    cout << "Size of array is: " << size << endl;
    cout << "So chan cuoi cung: " << timSoChanCuoiCung(arr, size) << endl;
}

int timSoChanCuoiCung(int a[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] % 2 == 0) {
            return a[i];
        }
    }
    return -1;
}
