// Viết hàm tìm số dương nhỏ nhất trong mảng 1 chiều các số nguyên !
#include <iostream>
using namespace std;

void nhapMang(int arr[], int n);

void xuatMang(int arr[], int n);

int findMinPositive(int arr[], int n);

int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    int arr[n];
    nhapMang(arr, n);
    xuatMang(arr, n);
    int index = findMinPositive(arr, n);
    if (index == -1) {
        cout << "Khong co so duong trong mang" << endl;
    } else {
        cout << "So duong nho nhat trong mang la: " << arr[index] << endl;
    }
}

void nhapMang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap a[" << i << "]: ";
        cin >> arr[i];
    }
}

void xuatMang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int findMinPositive(int arr[], int n) {
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            if (index == -1) {
                index = i;
            } else if (arr[i] < arr[index]) {
                index = i;
            }
        }
    }
    return index;
}