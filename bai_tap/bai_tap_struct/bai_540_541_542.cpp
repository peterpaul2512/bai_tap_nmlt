// Bài 540: khai báo dữ liệu điểm OXY
// Bài 541: Nhập tọa độ điểm trong mặt phẳng
// Bài 542: Xuất tọa độ điểm trong mặt phẳng
#include <iostream>
using namespace std;

struct Diem {
    int x;
    int y;
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
    cin >> d.x;
    cout << "Nhap tung do: ";
    cin >> d.y;
    return d;
}

void xuatDiem(Diem d) {
    cout << "(" << d.x << ", " << d.y << ")";
}
