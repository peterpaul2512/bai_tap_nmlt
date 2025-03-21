// Bài 218: Đếm số đối xứng trong mảng
#include <iostream>
using namespace std;

bool isPalindrome(int num);

int demSoDoiXung(int a[], int n);

int main() {
    int arr[] = {1, 2, 121, 323, 256, 545};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = demSoDoiXung(arr, n);
    cout << "So luong so doi xung la: " << result << endl;
}

bool isPalindrome(int num) {
    if (num < 0) return false;
    int original = num;
    int reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }
    return original == reversed;
}

int demSoDoiXung(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPalindrome(a[i])) {
            count++;
        }
    }
    return count;
}
