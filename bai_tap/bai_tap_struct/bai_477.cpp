// Bài 477: Hãy khai báo kiểu dữ liệu biểu diễn khái niệm điểm trong mặt phẳng Oxy và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này
#include <iostream>
using namespace std;

struct Diem {
    float X;
    float Y;
};

Diem nhapDiem();

void xuatDiem(Diem d);

int main() {
    Diem d = nhapDiem();
    xuatDiem(d);
    return 0;
}

Diem nhapDiem() {
    Diem d;
    cout << "Nhap hoanh do: ";
    cin >> d.X;
    cout << "Nhap tung do: ";
    cin >> d.Y;
    return d;
}

void xuatDiem(Diem d) {
    cout << "(" << d.X << ", " << d.Y << ")";
}
