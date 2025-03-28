//
// Created by Admin on 3/12/2025.
//
// ●	Bài 145: Tìm số hoàn thiện đầu tiên trong mảng 1 chiều số nguyên. Nếu mảng không có số hoàn thiện thì trả về  -1
#include <iostream>
using namespace std;

bool isPerfectNumber(int num);

int findFirstPerfectNumber(int a[], int n);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int size = std::size(arr);
    cout << "So hoan thien dau tien: " << findFirstPerfectNumber(arr, size) << endl;
}

bool isPerfectNumber(int num) {
    if (num < 1) return false;
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int findFirstPerfectNumber(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (isPerfectNumber(a[i])) {
            return a[i];
        }
    }
    return -1;
}
