// Viet ham tinh trung binh cong cac so nguyen to trong mang 1 chieu cac so nguyen
#include <iostream>
#include <math.h>
using namespace std;

void nhapMang(int arr[], int n);

bool isPrime(int n);

void tinhTBC(int arr[], int n);

int main() {
    int arr[100];
    int n;
    cout << "Nhap so luong ptu mang: ";
    cin >> n;
    nhapMang(arr, n);
    tinhTBC(arr, n);
    return 0;
};

void nhapMang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap a[" << i << "] = ";
        cin >> arr[i];
    }
}

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void tinhTBC(int arr[], int n) {
    float sum = 0.0;
    float avg = 0.0;
    float count = 0.0;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            sum += arr[i];
            count++;
        }
    }
    if (count == 0) {
        cout << "Khong co SNT ";
        return;
    }
    avg = sum / count;
    cout << "TBC cac SNT la: " << avg << endl;
};
