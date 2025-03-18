//
// Created by Admin on 2/22/2025.
//
// Tính S(n) = ½ + ¾ + 5/6 + … + 2n + 1/ 2n + 2

#include <iostream>
using namespace std;
int main() {
    double sum = 0.0;
    double n;
    cout << "Please enter n : ";
    cin >> n;
    for (int i = 0.0; i <= n; i++) {
        sum += (2.0 * i + 1) / (2.0 * i + 2);
    };
    cout << "S(n) = " << sum << endl;
}