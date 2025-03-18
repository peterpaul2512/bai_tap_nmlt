//
// Created by Admin on 2/22/2025.
//
// Bài 7: Tính S(n) = ½ + 2/3 + ¾ + …. + n / n + 1

#include <iostream>
using namespace std;
int main() {
    double sum = 0.0;
    double n;
    cout << "Please enter n : ";
    cin >> n;
    for (int i = 1.0; i <= n; i++) {
        sum += i / (i+1.0);
    };
    cout << "S(n) = " << sum << endl;
}