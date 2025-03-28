// Bài 266: Thêm 1 phần tử x vào mảng tại vị trí k
#include <iostream>
using namespace std;

void addNew(int a[], int &n, int k, int x);

void xuatMang(int a[], int n);

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cout << "Nhap index k can them: ";
    cin >> k;

    int x;
    cout << "Nhap gia tri can them: ";
    cin >> x;

    cout << "Mang truoc khi them: " << endl;
    xuatMang(arr, n);
    cout << endl;
    addNew(arr, n, k, x);
    cout << "Mang sau khi them: " << endl;
    xuatMang(arr, n);
}

void xuatMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void addNew(int a[], int &n, int k, int x) {
    if (n <= 0 || k < 0 || k > n) {
        return;
    }
    n = n + 1;
    for (int j = n - 1; j >= k; j--) {
        a[j + 1] = a[j];
    }
    a[k] = x;
}
