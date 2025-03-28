// Bài 221: Cho biết sự tương quan giữa số lượng chẵn và lẻ trong mảng
#include <iostream>
using namespace std;

int demChan(int arr[], int n);

int demLe(int arr[], int n);

int kiemTraTuongQuan(int soLuongChan, int soLuongLe);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int soLuongChan = demChan(arr, n);
    int soLuongLe = demLe(arr, n);

    int result = kiemTraTuongQuan(soLuongChan, soLuongLe);
    if (result == 0) {
        cout << "Chan = Le";
    } else if (result == 1) {
        cout << "Chan < Le";
    } else if (result == -1) {
        cout << "Chan > Le";
    }
}

int demChan(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int demLe(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}

int kiemTraTuongQuan(int soLuongChan, int soLuongLe) {
    if (soLuongChan == soLuongLe) {
        return 0;
    } else if (soLuongChan < soLuongLe) {
        return 1;
    } else {
        return -1;
    }
}