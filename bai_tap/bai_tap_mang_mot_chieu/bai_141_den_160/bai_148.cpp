//
// Created by Admin on 3/13/2025.
//
// Bài 148: Tìm số nguyên tố cuối cùng trong mảng 1 chiều các số nguyên. Nếu mảng không có số nguyên tố thì trả về  -1
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n);

int findLastPrime(int a[], int n);

int main() {
    int arr[] = {10, -5, 23, 7, 0, -12, 8};
    int n = std::size(arr);
    cout << "So nguyen to cuoi cung: " << findLastPrime(arr, n) << endl;
    return 0;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int findLastPrime(int a[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        if (isPrime(a[i])) {
            return a[i];
        }
    }
    return -1;
}
