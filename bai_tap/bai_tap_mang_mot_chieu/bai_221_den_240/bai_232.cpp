// Bài 232: Hãy liệt kê các giá trị xuất hiện trong dãy quá 1 lần. Lưu ý: mỗi giá trị liệt kê 1 lần
#include <iostream>
using namespace std;

void lietKe(int a[], int n);

int main() {
    int arr[] = {1, 2, 3, 2, 3, 4, 5, 6, 6, 7, 8, 9, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Cac gia tri xuat hien qua 1 lan la: " << endl;
    lietKe(arr, n);
}

void lietKe(int a[], int n) {
    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j] && i != j) {
                isDuplicate = true;
                break;
            }
        }
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j] && isDuplicate) {
                cout << a[i] << " ";
            }
        }
    }
}
