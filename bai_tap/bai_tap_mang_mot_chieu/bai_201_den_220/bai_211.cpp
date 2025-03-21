//
// Created by Admin on 3/15/2025.
//
// Bài 211: Tính trung bình cộng các số nguyên tố trong mảng 1 chiều các số nguyên
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n);

float tinhTrungBinhCong(int a[], int n);

int main() {
    int arr[] = {6, -3, 28, 1, 50, -10, 11, 35, -7, 0, 2, 29};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Trung binh cong cac so nguyen to la: " << tinhTrungBinhCong(arr, n) << endl;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

float tinhTrungBinhCong(int a[], int n) {
    int count = 0;
    int sum = 0;
    float result = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(a[i])) {
            sum += a[i];
            count++;
        }
    }
    if (count == 0) {
        result = 0;
    } else {
        result = 1.0 * sum / count;
    }
    return result;
}
