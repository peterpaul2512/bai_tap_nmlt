// Bài 229: Đếm số lượng các giá trị phân biệt có trong mảng
#include <iostream>
using namespace std;

int demSoLuongPhanBiet(int a[], int n);

int main() {
    int arr[] = {1, 2, 2, 3, 4, 5, 6, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "So luong phan tu phan biet: " << demSoLuongPhanBiet(arr, n) << endl;
}

int demSoLuongPhanBiet(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        bool daDem = false;
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                daDem = true;
                break;
            }
        }
        // cout << "So " << a[i] << " daDem: " << daDem << endl;
        if (!daDem) {
            count ++;
        }
    }
    return count;
}
