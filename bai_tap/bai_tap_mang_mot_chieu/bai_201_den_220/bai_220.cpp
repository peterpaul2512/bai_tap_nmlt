// Bài 220: Đếm số lượng giá trị tận cùng bằng 5 trong mảng
#include <iostream>
#include <cmath>
using namespace std;

bool tanCungLa5(int num);

int demSoLanXuatHien(int arr[], int n);

int main() {
    int arr[] = {10, 15, 25, 32, 12, -55, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = demSoLanXuatHien(arr, n);
    cout << "So luong tan cung la 5: " << result << endl;
}

bool tanCungLa5(int num) {
    num = abs(num);
    if (num < 10) {
        return num == 5;
    }
    return num % 10 == 5;
}

int demSoLanXuatHien(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (tanCungLa5(a[i])) {
            count++;
        }
    }
    return count;
}
