//
// Created by Admin on 3/12/2025.
//
// ●	Bài 122: Viết hàm tìm giá trị lớn nhất trong mảng 1 chiều các số thực
#include <iostream>
using namespace std;

float findMaxInArray(float arr[], int size) {
    float max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    float arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = std::size(arr);
    cout << "The max element in the array is: " << findMaxInArray(arr, size) << endl;
    return 0;
}
