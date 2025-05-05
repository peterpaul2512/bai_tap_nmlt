// Viet ham tinh trung binh cong cac so nguyen to trong mang 1 chieu cac so nguyen
#include <iostream>
#include <math.h>
using namespace std;

void nhapMang(int arr[], int n);

void xuatMang(int arr[], int n);

bool isPrime(int n);

void tinhTrungBinhCong(int arr[], int n);

int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    int arr[n];
    nhapMang(arr, n);
    xuatMang(arr, n);
    tinhTrungBinhCong(arr, n);
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

void nhapMang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i << ": ";
        cin >> arr[i];
    }
}

void xuatMang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "]: " << arr[i] << endl;
    }
}

void tinhTrungBinhCong(int arr[], int n) {
    float sum = 0.0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            sum += arr[i];
            count++;
        }
    }
    if (count == 0) {
        cout << "Khong co so nguyen to trong mang";
    } else {
        float avg = sum / count;
        cout << "Trung binh cong cac so nguyen to trong mang: " << avg;
    }
}
