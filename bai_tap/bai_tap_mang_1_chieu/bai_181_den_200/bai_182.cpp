// Bài 182: Cho mảng 1 chiều các số thực. Hãy viết hàm liệt kê tất cả các giá trị trong mảng có ít nhất 1 lận cận trái dấu với nó
#include <iostream>
using namespace std;

void lietKe(float a[], int n);

int main() {
    float arr[] = {2.0, -4.4, 3.0, -1.1, 8.0, 6.3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Cac gia tri thoa man : ";
    lietKe(arr, n);
}

void lietKe(float a[], int n) {
    for (int i = 0; i < n; i++) {
        bool lanCanTraiDau = false;

        if (i > 0 && a[i] * a[i - 1] < 0) {
            lanCanTraiDau = true;
        }

        if (i < n - 1 && a[i] * a[i + 1] < 0) {
            lanCanTraiDau = true;
        }
        if (lanCanTraiDau) {
            cout << a[i] << " ";
        }
    }
}
