//
// Created by Admin on 3/12/2025.
//
// ●	Bài 139: Tìm vị trí số hoàn thiện cuối cùng trong mảng 1 chiều các số nguyên. Nếu mảng không có số hoàn thiện thì trả về giá trị  -1
#include <iostream>
using namespace std;

bool isPerfectNumber(int num);
int findLastPerfectNumberIndex(int a[], int n);

int main() {
    int arr[] = {10, -5, 23, 7, 6, 0, -12, 8};
    int size = std::size(arr);
    cout << "Vi tri so hoan thien cuoi cung: " << findLastPerfectNumberIndex(arr, size);
}

bool isPerfectNumber(int num) {
    if (num <= 1) return false;
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int findLastPerfectNumberIndex(int a[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        if (isPerfectNumber(a[i])) {
            return i;
        }
    }
    return -1;
}
