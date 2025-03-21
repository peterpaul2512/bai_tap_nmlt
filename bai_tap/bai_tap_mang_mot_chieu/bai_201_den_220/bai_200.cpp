// Bài 200: Tính tổng các phần tử trong mảng

#include <iostream>
using namespace std;

void nhapMang(int a[], int n);

void xuatMang(int a[], int n);

int tinhTong(int a[], int n);

int main() {
    int arr[100];
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    nhapMang(arr, n);
    xuatMang(arr, n);
    int sum = tinhTong(arr, n);
    cout << "Tong cac phan tu trong mang: " << sum << endl;
}

void nhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu a[" << i << "] : ";
        cin >> a[i];
    }
    cout << endl;
}

void xuatMang(int a[], int n) {
    cout << "Cac phan tu trong mang la: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int tinhTong(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}
