// Bài 227: Hãy xác định số lượng phần tử kề nhau mà cả 2 trái dấu
#include <iostream>
using namespace std;

int demSoKeTraiDau(int a[], int n);

int main() {
    int arr[] = {1, -2, 3, -4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "So luong thoa man de bai: " << demSoKeTraiDau(arr, n) << endl;
}

int demSoKeTraiDau(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] * a[i + 1] < 0) {
            count++;
        }
    }
    return count;
}
