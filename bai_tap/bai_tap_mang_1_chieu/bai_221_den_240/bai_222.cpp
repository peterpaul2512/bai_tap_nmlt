//●	Bài 222: Đếm phần tử lớn hơn hay nhỏ hơn phần tử xung quanh mảng
#include <iostream>
using namespace std;

void nhapMang(int a[], int &n);

void xuatMang(int a[], int n);

int demPhanTu(int a[], int n);

int main() {
    int a[100];
    int n;
    nhapMang(a, n);
    xuatMang(a, n);
    cout << "So luong phan tu lon hon hoac nho hon phan tu xung quanh: " << demPhanTu(a, n);
    return 0;
}

void nhapMang(int a[], int &n) {
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}

void xuatMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int demPhanTu(int a[], int n) {
    int count = 0;
    for (int i = 1; i < n - 1; i++) {
        if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
            count++;
        } else if (a[i] < a[i - 1] && a[i] < a[i + 1]) {
            count++;
        }
    }
    return count;
};
