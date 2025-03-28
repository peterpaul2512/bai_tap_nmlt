// Bài 216: Đếm số lượng số chẵn trong mảng
#include <iostream>
using namespace std;

int demSoLuong(int a[], int n);

int main() {
    int arr[] = {-2, -3, 5, 6, 7,};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = demSoLuong(arr, n);
    cout << "So luong so chan la: " << result << endl;
}

int demSoLuong(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}
