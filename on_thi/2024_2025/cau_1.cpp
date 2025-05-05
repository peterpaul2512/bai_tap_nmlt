// Viết hàm tính tổng các số nguyên tố nhỏ hơn số nguyên dương N
#include <iostream>
using namespace std;

bool isPrime(int n);

int sumPrime(int n);

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    if (n <= 0) {
        cout << "n phai la so nguyen duong" << endl;
        return 0;
    }
    cout << "Tong cac so nguyen to nho hon " << n << " la: " << sumPrime(n) << endl;
}

bool isPrime(int n) {
    if (n < 2) {
        return false;
    };
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        };
    }
    return true;
}

int sumPrime(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (isPrime(i)) {
            sum += i;
        };
    }
    return sum;
}
