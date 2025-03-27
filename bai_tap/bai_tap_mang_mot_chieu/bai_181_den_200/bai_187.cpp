// Bài 187: Hãy liệt kê các vị trí mà giá trị tại các vị trí đó bằng giá trị dương nhỏ nhất trong mảng 1 chiều các số thực
#include <iostream>
using namespace std;

void lietKe(float a[], int n);

int main() {
    float arr[] = {2.1, -1.2, 3.2, -1.2, 4.2, -1.2, 2.1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Cac vi tri thoa man : ";
    lietKe(arr, n);
}

void lietKe(float a[], int n) {
    // Tìm số dương nhỏ nhất
    float soDuongNhoNhat;
    bool found = false;

    for (int i = 0; i < n; i++) {
        // tìm số dương đầu tiên trong mảng
        if (a[i] > 0) {
            soDuongNhoNhat = a[i];
            // xét từ vị trí vừa tìm được đến cuối
            for (int j = i; j < n; j++) {
                if (a[j] < soDuongNhoNhat && a[j] > 0) {
                    soDuongNhoNhat = a[j];
                    found = true;
                    break;
                }
            }
        }
        if (found) {
            break;
        }
    }

    // Tìm các vị trí = số dương nhỏ nhất
    if (!found) {
        cout << "Khong co vi tri thoa man";
    } else {
        for (int i = 0; i < n; i++) {
            if (a[i] == soDuongNhoNhat) {
                cout << i << " ";
            }
        }
    }
}
