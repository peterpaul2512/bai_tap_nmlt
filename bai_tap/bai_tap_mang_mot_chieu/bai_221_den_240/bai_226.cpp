//Bài 226: Hãy xác định số lượng phần tử kề nhau mà cả 2 đều chẵn
#include <iostream>
using namespace std;

void nhapMang(int a[], int n);

void xuatMang(int a[], int n);

int demKeDeuChan(int a[], int n);

int main() {
    int arr[100];
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    nhapMang(arr, n);
    xuatMang(arr, n);
    int result = demKeDeuChan(arr, n);
    cout << "So luong thoa man: " << result << endl;
}

void nhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu a[" << i << "] : ";
        cin >> a[i];
    }
    cout << endl;
}

void xuatMang(int a[], int n) {
    cout << "Cac phan tu trong mang la: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int demKeDeuChan(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] % 2 == 0) {
            if (a[i + 1] % 2 == 0) {
                count++;
            }
        }
    }
    return count;
}
