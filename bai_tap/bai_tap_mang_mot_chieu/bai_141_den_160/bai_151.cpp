//
// Created by Admin on 3/13/2025.
//
// ●	Bài 151: Hãy tìm số nguyên tố lớn nhất trong mảng 1 chiều các số nguyên. Nếu mảng không có số nguyên tố thì trả về -1
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n);

int findMaxPrimeNumber(int a[], int n);

int main() {
    int arr[] = {6, -3, 28, 1, 50, -10, 11, 35, -7, 0, 2, 29};
    int n = std::size(arr);
    cout << "So nguyen to lon nhat: " << findMaxPrimeNumber(arr, n) << endl;
}

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int findMaxPrimeNumber(int a[], int n) {
    int maxPrime = -1;
    for (int i = 0; i < n; i++) {
        if (isPrime(a[i]) && a[i] > maxPrime) {
            maxPrime = a[i];
        }
    }
    return maxPrime;
}
