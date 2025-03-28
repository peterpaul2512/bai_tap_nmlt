// Bài 181: Cho mảng 1 chiều các số nguyên. Hãy viết hàm liệt kê các giá trị chẵn có ít nhất 1 lân cận cũng là giá trị chẵn
#include <iostream>
using namespace std;

void lietKe(int a[], int n);

int main() {
    int arr[] = {2, 4, 3, 1, 8, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Cac gia tri thoa man : ";
    lietKe(arr, n);
}

void lietKe(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            bool coLanCanChan = false;

            if (i > 0 && a[i - 1] % 2 == 0) {
                coLanCanChan = true;
            }
            if (i < n - 1 && a[i + 1] % 2 == 0) {
                coLanCanChan = true;
            }

            if (coLanCanChan) {
                cout << a[i] << " ";
            }
        }
    }
}