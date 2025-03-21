// Bài 219: Đếm số lần xuất hiện của giá trị x trong mảng
#include <iostream>
using namespace std;

int demSoLanXuatHien(int a[], int n, int x);

int main() {
    int arr[] = {1, 2, 3, 4, 2, 5, 2, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    cout << "Nhap gia tri can dem: ";
    cin >> x;

    int result = demSoLanXuatHien(arr, n, x);
    cout << "Gia tri " << x << " xuat hien: " << result << endl;
    return 0;
};

int demSoLanXuatHien(int a[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            count++;
        }
    }
    return count;
}
