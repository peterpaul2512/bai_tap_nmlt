//
// Created by Admin on 3/12/2025.
//
// ●	Bài 144: Tìm số nguyên tố đầu tiên trong mảng 1 chiều các số nguyên. Nếu mảng không có số nguyên tố thì trả về  – 1
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n);
int findPrimeNumber(int a[], int n);

int main() {
    int arr[] = {10, -5, 23, 7, 0, -12, 8};
    int n = std::size(arr);
    cout << "PrimeNumber : " << findPrimeNumber(arr, n) << endl;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int findPrimeNumber(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (isPrime(a[i])) {
            return a[i];
        }
    }
    return -1;
}
