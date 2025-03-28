//
// Created by Admin on 3/12/2025.
//
//●	Bài 123: Viết hàm tìm 1 vị trí mà giá trị tại vị trí đó là giá trị nhỏ nhất trong mảng 1 chiều các số nguyên
#include <iostream>
using namespace std;

int findMinValue(int arr[], int size, int &minIndex);

int main() {
    int arr[] = {5, 4, 2, 6, 1, 7, 9};
    int size = std::size(arr);
    int minIndex = 0;
    cout << "Min is " << findMinValue(arr, size, minIndex) << " at index " << minIndex << endl;
}

int findMinValue(int arr[], int size, int &minIndex) {
    int min = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }
    }
    return min;
}
