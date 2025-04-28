// Bài 478: Hãy khai báo kiểu dữ liệu biểu diễn khái niệm điểm trong không gian Oxyz và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này
#include <iostream>
using namespace std;

struct Diem {
    float X;
    float Y;
    float Z;
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
    cout << "Nhap cao do: ";
    cin >> d.Z;
    return d;
}

void xuatDiem(Diem d) {
    cout << "(" << d.X << ", " << d.Y << ", " << d.Z << ")";
}
