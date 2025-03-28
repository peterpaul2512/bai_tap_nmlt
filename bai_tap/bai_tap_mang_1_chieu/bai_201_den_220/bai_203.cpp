// ●	Bài 203: Tinh tổng các chữ số có chữ số hàng chục là 5 trong mảng 1 chiều các số nguyên
#include <iostream>
#include <cmath>
using namespace std;

bool hangChucLaNam(int num);

int tinhTongCacChuSo(int num);

int tinhTongChung(int a[], int n);

int main() {
    int arr[] = {1, 3, 5, 6, 51, 52, 20, 21};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = tinhTongChung(arr, n);
    cout << "Tong cac chu so co chu so hang chuc la 5: " << sum << endl;
}

bool hangChucLaNam(int num) {
    num = abs(num);
    if (num < 50) {
        return false;
    }
    int hangChuc = (num / 10) % 10;
    return hangChuc == 5;
}

int tinhTongCacChuSo(int num) {
    int sum = 0;
    num = abs(num);
    while (num > 0) {
        sum += num % 10;
        num = num / 10;
    }
    return sum;
}

int tinhTongChung(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (hangChucLaNam(a[i])) {
            sum += tinhTongCacChuSo(a[i]);
        }
    }
    return sum;
}
