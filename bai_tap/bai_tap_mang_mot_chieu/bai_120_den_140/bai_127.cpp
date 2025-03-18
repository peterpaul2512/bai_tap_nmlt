//
// Created by Admin on 3/12/2025.
//
// ●	Bài 127: Viết hàm sắp xếp mảng 1 chiều các số thực tăng dần
#include <iostream>
using namespace std;

void printArray(float arr[], int size);

void bubbleSort(float arr[], int size);

int main() {
    float arr[] = {-3.5, 2.1, -7.8, 4.6, -1.2, 0.0, 5.9, -9.4, 8.3, -6.7};
    int size = std::size(arr);
    cout << "Mang truoc khi sap xep: " << endl;
    printArray(arr, size);
    bubbleSort(arr, size);
    cout << "Mang truoc sau khi sap xep: " << endl;
    printArray(arr, size);
}

void printArray(float arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(float arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]); // Đưa phần tử nhỏ nhất lên đầu phần chưa sắp xếp
    }
}