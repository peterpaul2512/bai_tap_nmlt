// Bài 555: Khai báo kiểu dữ liệu biểu diễn tọa độ điểm trong không gian Oxyz
// Bài 556: Nhập tọa độ điểm trong không gian Oxyz
// Bài 557: Xuất tọa độ điểm theo định dạng (x, y, z)
#include <iostream>
using namespace std;

struct Diem {
    float x;
    float y;
    float z;
};

Diem nhapDiem();

void xuatDiem(Diem diem);

int main() {
    Diem diem = nhapDiem();
    xuatDiem(diem);
    return 0;
}

Diem nhapDiem() {
    Diem diem;
    cout << "Nhap x: ";
    cin >> diem.x;
    cout << "Nhap y: ";
    cin >> diem.y;
    cout << "Nhap z: ";
    cin >> diem.z;
    return diem;
}

void xuatDiem(Diem diem) {
    cout << "(" << diem.x << ", " << diem.y << ", " << diem.z << ")" << endl;
}
