// Bài 231: Hãy liệt kê các giá trị xuất hiện trong mảng 1 chiều các số nguyên đúng 1 lần
#include <iostream>
using namespace std;

void lietKe(int a[], int n);

int main() {
    int arr[] = {1, 2, 3, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Cac gia tri xuat hien 1 lan la: " << endl;
    lietKe(arr, n);
}

void lietKe(int a[], int n) {
    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j] && i != j ) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            cout << a[i] << " ";
        }
    }
}
