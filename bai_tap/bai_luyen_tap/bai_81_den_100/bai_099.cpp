//
// Created by Admin on 2/26/2025.
// Bài 99: Viết chương trình nhập vào 3 số thực. Hãy in 3 số ấy ra màn hình theo thứ tự tăng dần mà chỉ dùng tối đa 1 biến phụ
#include <iostream>
using namespace std;

int main() {
    float a, b, c, temp; // Chỉ dùng 1 biến phụ temp
    cout << "Nhap 3 so thuc a, b, c: ";
    cin >> a >> b >> c;

    // Sắp xếp tăng dần: a <= b <= c
    if (a > b) {
        // Đảm bảo a <= b
        temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        // Đảm bảo b <= c
        temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        // Kiểm tra lại a <= b sau khi thay đổi b và c
        temp = a;
        a = b;
        b = temp;
    }

    // In kết quả
    cout << "3 so theo thu tu tang dan: " << a << " " << b << " " << c << endl;
    return 0;
}
