// ●	Bài 204: Tính tổng các giá trị lớn hơn giá trị đứng liền trước nó trong mảng 1 chiều các số thực
#include <iostream>
using namespace std;

float tinhTong(float a[], int n);

int main() {
    float arr[] = {1.2, 5.1, 3.2, 2.2, 4.3};
    int n = sizeof(arr) / sizeof(arr[0]);
    float sum = tinhTong(arr, n);
    cout << "Tong thoa dieu kien la: " << sum << endl;
}

float tinhTong(float a[], int n) {
    float sum = 0.0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i + 1] > a[i]) {
            sum += a[i + 1];
        }
    }
    return sum;
}
