// Bài 208: Tính tổng các giá trị chính phương trong mảng 1 chiều các số nguyên
#include <iostream>
#include <cmath>
using namespace std;

int tinhTong(int a[], int n);

int main() {
    int arr[] = {1, 4, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = tinhTong(arr, n);
    cout << "Tong thoa man la: " << sum << endl;
    return 0;
}

int tinhTong(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int canBacHai = sqrt(a[i]);
        if (pow(canBacHai, 2) == a[i]) {
            sum += a[i];
        }
    }
    return sum;
}
