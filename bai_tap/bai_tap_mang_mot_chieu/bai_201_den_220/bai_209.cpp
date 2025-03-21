// Bài 209: Tính tổng các giá trị đối xứng trong mảng các số nguyên
#include <iostream>
using namespace std;

bool isPalindrome(int num);

int tinhTong(int a[], int n);

int main() {
    int arr[] = {121, 234, 454, 321, 505};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = tinhTong(arr, n);
    cout << "Tong thoa man la: " << sum << endl;
}

bool isPalindrome(int num) {
    if (num < 0) return false;
    int original = num;
    int reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}

int tinhTong(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (isPalindrome(a[i])) {
            sum += a[i];
        }
    }
    return sum;
}
