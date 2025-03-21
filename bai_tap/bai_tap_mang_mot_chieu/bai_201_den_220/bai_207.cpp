// Bài 207: Tính tổng các phần tử “cực trị” trong mảng.
// Một phần tử được gọi là cực trị khi nó lớn hơn hoặc nhỏ hơn các phần tử xung quanh nó

#include <iostream>
using namespace std;

float tinhTong(float a[], int n);

int main() {
    float arr[] = {1.2, 2.3, 1.5, 5.2, 3.2, 2.2, 3.3, 2.7};
    int n = sizeof(arr) / sizeof(arr[0]);
    float sum = tinhTong(arr, n);
    cout << "Tong thoa man la: " << sum << endl;
    return 0;
}

float tinhTong(float a[], int n) {
    float sum = 0.0;
    for (int i = 1; i < n - 1; i++) {
        bool dieukien = ((a[i] > a[i + 1]) && (a[i] > a[i - 1])) || ((a[i] < a[i + 1]) && (a[i] < a[i - 1]));
        if (dieukien) {
            sum += a[i];
        }
    }
    return sum;
}
