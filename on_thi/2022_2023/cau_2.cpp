// Viết hàm tìm số nguyên tố nhỏ nhất trong mảng 1 chiều các số nguyên
#include <iostream>
#include <math.h>
using namespace std;

void nhapMang(int a[], int size);

void xuatMang(int a[], int size);

bool isPrime(int n);

void soNguyenToNhoNhat(int a[], int size);

int main() {
    int size;
    cout << "Nhap so luong phan tu mang: ";
    cin >> size;
    int a[size];
    nhapMang(a, size);
    xuatMang(a, size);
    soNguyenToNhoNhat(a, size);
}

void nhapMang(int a[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Nhap phan tu thu : a[" << i << "]=";
        cin >> a[i];
    }
}

void xuatMang(int a[], int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i] << "\t";
    }
}

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void soNguyenToNhoNhat(int a[], int size) {
    int min = 0;
    bool flag = false;
    // tìm so nguyen to đầu tiên
    for (int i = 0; i < size; i++) {
        if (isPrime(a[i])) {
            min = a[i];
            flag = true;
            break;
        }
    }

    if (!flag) {
        cout << "Khong co so nguyen to nao trong mang";
        return;
    }
    // tìm so nguyen to nhỏ nhất
    for (int i = 0; i < size; i++) {
        if (isPrime(a[i]) && a[i] < min) {
            min = a[i];
        }
    }
    cout << "So nguyen to nho nhat trong mang la: " << min;
}
