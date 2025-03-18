//
// Created by Admin on 3/13/2025.
//
// ●	Bài 152: Hãy tìm số hoàn thiện nhỏ nhất trong mảng 1 chiều các số nguyên. Nếu mảng không có số hoàn thiện thì trả về -1
#include <iostream>
using namespace std;

bool isPerfectNumber(int num);

int findMinPerfectNumber(int a[], int n);

int main() {
    int arr[] = {6, -3, 28, 1, 50, -10, 11, 35, -7, 0, 2, 29};
    int n = std::size(arr);
    cout << "So hoan thien nho nhat: " << findMinPerfectNumber(arr, n) << endl;
    return 0;
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

int findMinPerfectNumber(int a[], int n) {
    int minPerfect = -1;
    for (int i = 0; i < n; i++) {
        if (isPerfectNumber(a[i])) {
            if (minPerfect == -1 || a[i] < minPerfect) {
                minPerfect = a[i];
            }
        }
    }
    return minPerfect;
}
