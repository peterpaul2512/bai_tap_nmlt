// Bài 213: Tính trung bình cộng các giá trị lớn hơn giá trị x trong mảng 1 chiều các số thực
#include <iostream>
using namespace std;

float tinhTrungBinhCong(float a[], int n, float x);

int main() {
    float arr[] = {-1.2, 2.3, 4.3, -3.5};
    int n = sizeof(arr) / sizeof(arr[0]);
    float x;
    cout << "Nhap x: ";
    cin >> x;
    float result = tinhTrungBinhCong(arr, n, x);
    cout << "TBC la: " << result << endl;
}

float tinhTrungBinhCong(float a[], int n, float x) {
    float sum = 0.0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > x) {
            count++;
            sum += a[i];
        }
    }
    if (count == 0) {
        return sum;
    }
    return sum / count;
}
