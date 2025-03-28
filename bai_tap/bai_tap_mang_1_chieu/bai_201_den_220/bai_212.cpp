// Bài 212: Tính trung bình cộng các số dương trong mảng 1 chiều các số thực
#include <iostream>
using namespace std;

float tinhTrungBinhCong(float a[], int n);

int main() {
    float arr[] = {-1.2, 2.3, 4.3, -3.5};
    int n = sizeof(arr) / sizeof(arr[0]);
    float sum = tinhTrungBinhCong(arr, n);
    cout << "TBC la: " << sum << endl;
}

float tinhTrungBinhCong(float a[], int n) {
    float sum = 0.0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            sum += a[i];
            count++;
        }
    }
    if (count >= 1) {
        return sum / count;
    }
    return 0;
}
