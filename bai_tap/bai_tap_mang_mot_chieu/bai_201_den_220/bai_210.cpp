// Bài 210: Tính tổng các giá trị có chữ số đầu tiên là chữ số chẵn trong mảng các số nguyên
#include <iostream>
#include <cmath>
using namespace std;

bool soDauTienLaChan(int num);

int tinhTong(int a[], int n);

int main() {
    int arr[] = {1, 2, 20, 122, 202, 1015, 4010};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = tinhTong(arr, n);
    cout << "Tong thoa man : " << sum << endl;
}

bool soDauTienLaChan(int num) {
    num = abs(num);
    while (num >= 10) {
        num = num / 10;
    }
    return num % 2 == 0;
}

int tinhTong(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (soDauTienLaChan(a[i])) {
            sum += a[i];
        }
    }
    return sum;
}
