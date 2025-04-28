// Bài 483: Hãy khai báo kiểu dữ liệu biểu diễn khái niệm đường tròn trong mặt phẳng Oxy
// và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này
#include <iostream>
using namespace std;

struct DuongTron {
    float X;
    float Y;
    float R;
};

DuongTron nhapDuongTron();

void xuatDuongTron(DuongTron dt);

int main() {
    DuongTron dt = nhapDuongTron();
    xuatDuongTron(dt);
    return 0;
}

DuongTron nhapDuongTron() {
    DuongTron dt;
    cout << "Nhap hoanh do: ";
    cin >> dt.X;
    cout << "Nhap tung do: ";
    cin >> dt.Y;
    cout << "Nhap ban kinh: ";
    cin >> dt.R;
    return dt;
}

void xuatDuongTron(DuongTron dt) {
    cout << "Duong tron co tam (" << dt.X << ", " << dt.Y << ") va ban kinh " << dt.R;
}
