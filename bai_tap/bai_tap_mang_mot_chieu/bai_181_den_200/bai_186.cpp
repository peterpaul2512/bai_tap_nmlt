// Bài 186: Hãy liệt kê các vị trí trong mảng 1 chiều các số thực mà giá trị tại đó bằng giá trị âm đầu tiên trong mảng
#include <iostream>
using namespace std;

void lietKe(float a[], int n);

int main() {
    float arr[] = {2.1, -1.2, 3.2, -1.2, 4.2, -1.2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Cac vi tri thoa man : ";
    lietKe(arr, n);
}

void lietKe(float a[], int n) {
    //Tìm số âm đầu tiên
    float soAmDauTien;
    int indexSoAm;
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            soAmDauTien = a[i];
            found = true;
            indexSoAm = i;
            break;
        }
    }

    // Tìm các vị trí = số âm đầu tiên
    if (!found) {
        cout << "Khong co so am trong mang";
    } else {
        for (int j = indexSoAm + 1; j < n; j++) {
            if (a[j] == soAmDauTien) {
                cout << j << " ";
            }
        }
    }
}
