// Bài 151: Hãy tìm số nguyên tố lớn nhất trong mảng 1 chiều các số nguyên.
// Nếu mảng không có số nguyên tố thì trả về -1
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n);

int findMaxPrimeNumber(int a[], int n);

int main() {
    int arr[] = {1, 4, 3, 7, 13, 9, 5};
    int n = std::size(arr);
    int result = findMaxPrimeNumber(arr, n);
    if (result == -1) {
        cout << "Khong co so nguyen to trong mang" << endl;
    } else {
        cout << "So nguyen to lon nhat: " << arr[result] << endl;
    }
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
    int maxPrimeIndex = -1;
    int maxPrime = 0;

    // tìm số nguyên tố đầu tiên
    for (int i = 0; i < n; i++) {
        if (isPrime(a[i])) {
            maxPrime = a[i];
            maxPrimeIndex = i;
            break;
        }
    }
    // nếu ko có snt thì không tìm nữa
    if (maxPrimeIndex == -1) {
        return -1;
    }

    // tìm được số đầu rồi tìm số lớn
    for (int j = maxPrimeIndex + 1; j < n; j++) {
        if (isPrime(a[j]) && a[j] > maxPrime) {
            maxPrime = a[j];
            maxPrimeIndex = j;
        }
    }

    // trả về vị trí số lớn
    return maxPrimeIndex;
}
