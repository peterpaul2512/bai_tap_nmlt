// Bài 188: Hãy liệt kê các vị trí chẵn lớn nhất trong mảng 1 chiều các số nguyên
#include <iostream>
using namespace std;

void lietKe(int a[], int n);

int main() {
    int arr[] = {5, 8, 60, 15, 24, 30, 41, 52, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Cac vi tri thoa man: ";
    lietKe(arr, n);
    return 0;
}

void lietKe(int a[], int n) {
    int maxValue = -1;
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0 && a[i] > maxValue) {
            maxValue = a[i];
            found = true;
        }
    }
    if (!found) {
        cout << "Khong co vi tri thoa man";
    } else {
        for (int i = 0; i < n; i++) {
            if (a[i] == maxValue) {
                cout << i << " ";
            }
        }
    }
}
