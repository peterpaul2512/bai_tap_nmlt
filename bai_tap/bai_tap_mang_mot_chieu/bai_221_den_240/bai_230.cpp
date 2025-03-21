//●	Bài 230: Liệt kê tần suất xuất hiện các giá trị trong mảng (mỗi giá trị liệt kê 1 lần)
#include <iostream>
using namespace std;

void lietKeTanSuat(int a[], int n);

int main() {
    int arr[] = {1, 2, 3, 2, 3, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Tan suat xuat hien cac phan tu : " << endl;
    lietKeTanSuat(arr, n);
}

void lietKeTanSuat(int a[], int n) {
    for (int i = 0; i < n; i++) {
        bool chuaThongKe = true;

        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                chuaThongKe = false;
                break;
            }
        }

        if (chuaThongKe) {
            int dem = 0;
            for (int j = i; j < n; j++) {
                if (a[j] == a[i]) {
                    dem++;
                }
            }
            cout << "Phan tu : " << a[i] << " xuat hien : " << dem << " lan" << endl;
        }
    }
}
