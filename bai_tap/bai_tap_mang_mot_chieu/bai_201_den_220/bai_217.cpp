// ●	Bài 217: Đếm số dương chia hết cho 7 trong mảng
#include <iostream>
using namespace std;

int demSoDuongThoaMan(int a[], int n);

int main() {
    int arr[] = {7, 10, 14, 25, 21, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = demSoDuongThoaMan(arr, n);
    cout << "So luong so duong thoa man la: " << result << endl;
};

int demSoDuongThoaMan(int a[], int n) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 7 == 0) {
            dem++;
        }
    }
    return dem;
}
