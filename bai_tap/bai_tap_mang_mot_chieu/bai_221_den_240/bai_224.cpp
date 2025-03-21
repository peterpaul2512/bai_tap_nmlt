// ●	Bài 224: Đếm số hoàn thiện trong mảng
#include <iostream>
#include <cstdio>
using namespace std;

bool isPerfectNumber(int num);

int demSoHoanThien(int a[], int n);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "So luong so hoan thien trong mang la: " << demSoHoanThien(arr, n) << endl;
    // printf("So luong so hoan thien trong mang la: %d\n", demSoHoanThien(arr, n));
}

bool isPerfectNumber(int num) {
    if (num <= 1) return false;
    int sum = 0;
    for (int i = 1; i < num; i++) {
        sum += num / i;
    }
    return sum == num;
}

int demSoHoanThien(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPerfectNumber(a[i])) {
            count++;
        }
    }
    return count;
}
