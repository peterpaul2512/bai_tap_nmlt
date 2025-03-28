// Bài 183: Hãy liệt kê các vị trí mà giá trị tại đó là giá trị lớn nhất trong mảng 1 chiều các số thực
#include <iostream>
using namespace std;

void lietKe(float a[], int n);

int main() {
    float arr[] = {2.0, -4.4, 3.0, -1.1, 8.0, 6.3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Cac vi tri thoa man : ";
    lietKe(arr, n);
}

void lietKe(float a[], int n) {
    for (int i = 1; i < n - 1; i++) {
        bool dieuKienLietKe = a[i] > a[i - 1] && a[i + 1] < a[i];
        if (dieuKienLietKe) {
            cout << "a[" << i << "]" << " ";
        }
    }
}
