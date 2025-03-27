//Bài 255: Sắp xếp mảng tăng dần
#include <iostream>
using namespace std;

void sort(int a[], int n);

void xuatMang(int a[], int n);

int main() {
    int arr[] = {1, 3, 5, 2, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    xuatMang(arr, n);
    cout << endl;
    sort(arr, n);
    xuatMang(arr, n);
}

void xuatMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void sort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}
