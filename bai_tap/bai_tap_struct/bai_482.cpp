// Bài 482: Hãy khai báo kiểu dữ liệu biểu diễn khái niệm đường thẳng ax + by + c = 0
// trong mặt phẳng Oxy và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này
#include <iostream>
using namespace std;

struct DuongThang {
    float a;
    float b;
    float c;
};

DuongThang nhapDuongThang();

void xuatDuongThang(DuongThang dt);

int main() {
    DuongThang dt = nhapDuongThang();
    xuatDuongThang(dt);
    return 0;
}

DuongThang nhapDuongThang() {
    DuongThang dt;
    cout << "Nhap he so a: ";
    cin >> dt.a;
    cout << "Nhap he so b: ";
    cin >> dt.b;
    cout << "Nhap he so c: ";
    cin >> dt.c;
    return dt;
}

void xuatDuongThang(DuongThang dt) {
    cout << dt.a << "x + " << dt.b << "y + " << dt.c << " = 0";
}
