//●	Bài 223: Đếm số nguyên tố trong mảng
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n);

int demSoNguyenTo(int a[], int n);

int main() {
    int arr[] = {2, 1, 5, 6, 8, 4, 68, 4, 5, 9, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = demSoNguyenTo(arr, n);
    cout << "So luong so nguyen to : " << count << endl;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int demSoNguyenTo(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(a[i])) {
            count++;
        }
    }
    return count;
}
