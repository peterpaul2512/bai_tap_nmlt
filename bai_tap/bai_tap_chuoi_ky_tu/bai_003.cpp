// Bài 3: Viết hàm nhận vào một chuỗi s và trả về chuỗi tương ứng sau khi xóa các khoảng trắng.
#include <iostream>
using namespace std;
#include <string.h>

void xoaKhoangTrang(char str[]);

int main() {
    char str[100];
    cout << "Nhap chuoi : ";
    cin.getline(str, 100);
    cout << "Chuoi ban dau: " << str << endl;

    cout << "Sau khi xoa khoang trang: ";
    xoaKhoangTrang(str);
    cout << str << endl;
    return 0;
}

void xoaKhoangTrang(char str[]) {
    int i = 0, j = 0;
    int len = strlen(str);

    while (i < len) {
        if (str[i] != ' ') {
            str[j] = str[i]; // Di chuyển ký tự không phải khoảng trắng vào vị trí mới
            j++;
        }
        i++;
    }
    str[j] = '\0'; // Kết thúc chuỗi mới
}
