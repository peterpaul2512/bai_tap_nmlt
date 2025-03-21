// Bài 248: Kiểm tra mảng có tăng dần hay không
#include <iostream>
using namespace std;

bool isIncrease(int a[], int n);

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool tangDan = isIncrease(arr, n);
    if (tangDan) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}

bool isIncrease(int a[], int n) {
    bool flag = true;
    for (int i = 0; i < n-1; i++) {
        if (a[i] > a[i + 1]) {
            flag = false;
            break;
        }
    }
    return flag;
}
