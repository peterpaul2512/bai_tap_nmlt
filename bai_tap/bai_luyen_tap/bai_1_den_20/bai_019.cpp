//
// Created by Admin on 2/24/2025.
//
// Bài 19: Tính S(n) = 1 + x + x^3/3! + x^5/5! + … + x^(2n+1)/(2n+1)!

#include <cmath>
#include <iostream>
using namespace std;

double tinhMu(int a, int b){
    return pow(a, b);
}

int tinhGiaiThua(int a){
    int result = 1;
    for(int i = 1; i <= a; i++){
        result = result * i;
    }
    return result;
}

double tinhS19(int x, int n){
    double result = 1.0 + x;
    for(int i = 1; i <= n; i++){
        int mu = 2*i + 1;
        int mau = tinhGiaiThua(mu);
        result += tinhMu(x, mu)/mau;
    }
    return result;
}

int main() {
    int x;
    int n;
    double sum = 0.0;

    cout << "Enter x: ";
    cin >> x;
    cout << "Enter n: ";
    cin >> n;

    cout << "Result: " << tinhS19(x, n) << endl;
}