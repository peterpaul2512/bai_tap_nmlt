//
// Created by Admin on 3/12/2025.
//
// ●	Bài 125: Viết hàm đếm số lượng số nguyên tố nhỏ hơn 100 trong mảng
#include <iostream>
#include <math.h>
#include <valarray>
using namespace std;

bool isPrime(int n);

int countPrimes(int arr[], int size);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int n = size(arr);
    cout << "count primes: " << countPrimes(arr, n) << endl;
};

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int countPrimes(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i]) && arr[i] < 100) {
            count++;
        }
    }
    return count;
}
