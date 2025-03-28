//
// Created by Admin on 3/13/2025.
//
// ●	Bài 154: Hãy tìm vị trí giá trị âm nhỏ nhất trong mảng các số thực. Nếu mảng không có số âm thì trả về -1
#include <iostream>
using namespace std;

int findIndex(float a[], int n);

int main() {
    float arr[] = {6.0, -3.5, 28.0, 1.2, 50.6, -10.8, 11.3, 35.9, -7.1, 0.0, 2.7, 29.4};
    int n = std::size(arr);
    cout << "Vi tri so am nho nhat: " << findIndex(arr, n) << endl;
}

int findIndex(float a[], int n) {
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0.0) {
            if (index == -1 || a[i] < a[index]) {
                index = i;
            }
        }
    }
    return index;
}
