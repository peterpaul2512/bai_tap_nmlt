// Bài 184: Hãy liệt kê các vị trí mà giá trị tại đó là số nguyên tố trong mảng 1 chiều các số nguyên
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n);

void lietKe(int a[], int n);

int main() {
    int arr[] = {2, 4, 3, 1, 8, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Cac vi tri thoa man : ";
    lietKe(arr, n);
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void lietKe(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (isPrime(a[i])) {
            cout << i << " ";
        }
    }
}
