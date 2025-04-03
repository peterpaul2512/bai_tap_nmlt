// Bài 5: Viết hàm nhận vào một chuỗi s và xuất các từ trên các dòng liên tiếp.
#include <iostream>
#include <string.h>
using namespace std;

void hienThiThanhDong(const char str[]);

int main() {
    char str[100];
    cout << "Please input a string: ";
    cin.getline(str, 100);
    cout << "Your string: " << str << endl;

    hienThiThanhDong(str);
    return 0;
}

void hienThiThanhDong(const char str[]) {
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] != ' ') {
            cout << str[i];
        } else {
            cout << endl;
        }
    }
}
