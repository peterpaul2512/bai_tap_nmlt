// Bài 271: Xóa phần tử có chỉ số k trong mảng
#include <iostream>
using namespace std;

void deleteElement(int a[], int &n, int k);

void xuatMang(int a[], int n);

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cout << "Nhap index k can xoa: ";
    cin >> k;

    cout << "Mang truoc khi them: " << endl;
    xuatMang(arr, n);
    cout << endl;
    deleteElement(arr, n, k);
    cout << "Mang sau khi them: " << endl;
    xuatMang(arr, n);
}

void xuatMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void deleteElement(int a[], int &n, int k) {
    for (int i = k; i < n; i++) {
        a[i] = a[i + 1];
    }
    n = n - 1;
}
