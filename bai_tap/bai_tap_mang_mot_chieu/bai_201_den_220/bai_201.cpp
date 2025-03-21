// ●	Bài 201: Tính tổng các giá trị dương trong mảng 1 chiều các số thực
#include <iostream>
using namespace std;

void nhapMang(float a[], int n);

void xuatMang(float a[], int n);

float tinhTongGiaTriDuong(float a[], int n);

int main() {
    float arr[100];
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    nhapMang(arr, n);
    xuatMang(arr, n);
    float sum = tinhTongGiaTriDuong(arr, n);
    cout << "Tong cac gia tri duong trong mang: " << sum << endl;
}

void nhapMang(float a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu a[" << i << "] : ";
        cin >> a[i];
    }
    cout << endl;
}

void xuatMang(float a[], int n) {
    cout << "Cac phan tu trong mang la: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

float tinhTongGiaTriDuong(float a[], int n) {
    float sum = 0.0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            sum += a[i];
        }
    }
    return sum;
}
