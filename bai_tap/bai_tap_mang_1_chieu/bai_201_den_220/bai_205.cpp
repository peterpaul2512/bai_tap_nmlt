// Bài 205: Tính tổng các giá trị lớn hơn trị tuyệt đối của giá trị đứng liền sau nó trong mảng 1 chiều các số thực
#include <iostream>
#include <cmath>
using namespace std;

float tinhTong(float a[], int n);

int main() {
    float arr[] = {2.3, 1.2, -3.5, 1.7, 2.4, -1.3};
    int n = sizeof(arr) / sizeof(arr[0]);
    float sum = tinhTong(arr, n);
    cout << "Tong thoa man la: " << sum << endl;
}

float tinhTong(float a[], int n) {
    float sum = 0.0;
    for (int i = 0; i < n; i++) {
        if (a[i] > abs(a[i + 1])) {
            sum += a[i];
        }
    }
    return sum;
}