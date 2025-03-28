// Bài 214: Tính trung bình nhân các giá trị dương có trong mảng 1 chiều các số thực
#include <iostream>
#include <cmath>
using namespace std;

double tinhTrungBinhNhan(double a[], int n);

int main() {
    double arr[] = {1.2, 2.3, 4.3, -3.5};
    int n = sizeof(arr) / sizeof(arr[0]);
    double trungBinhNhan = tinhTrungBinhNhan(arr, n);
    cout << "Trung binh nhan la: " << trungBinhNhan << endl;
}

double tinhTrungBinhNhan(double a[], int n) {
    double tich = 1.0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            count++;
            tich *= a[i];
        }
    }
    if (count == 0) {
        return tich;
    }
    return pow(tich, 1.0 / count);
}
