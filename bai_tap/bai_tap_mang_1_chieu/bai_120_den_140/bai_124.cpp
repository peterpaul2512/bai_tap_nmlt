//
// Created by Admin on 3/12/2025.
//
// Bài 124: Viết hàm kiểm tra trong mảng các số nguyên có tồn tại giá trị chẵn nhỏ hơn 2004 hay không
#include <iostream>
using namespace std;

bool isExist(int arr[], int size);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = std::size(arr);
    cout << "isExist : " << isExist(arr, size);
}

bool isExist(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0 && arr[i] < 2004) {
            return true;
        }
    }
    return false;
}
