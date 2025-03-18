//
// Created by Admin on 2/26/2025.
// Bài 93: Tính tổng các số nguyên tố nhỏ hơn N (N nguyên dương)
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void tinhTong(int n) {
    int sum = 0;
    cout << "Cac so nguyen to: ";
    for (int i = 1; i < n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
            sum += i;
        }
    }
    cout << endl;
    cout << "Tong cac so nguyen to nho hon n : " << sum << endl;
}

int main() {
    int n;
    cout << "Input n: ";
    cin >> n;

    if (n < 1) {
        cout << "Invalid input" << endl;
    } else {
        tinhTong(n);
    }
}
