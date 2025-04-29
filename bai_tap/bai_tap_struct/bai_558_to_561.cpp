// Bài 558: Tính khoảng cách giữa 2 điểm trong không gian
// Bài 559: Tính khoảng cách giữa 2 điểm trong không gian theo phương x
// Bài 560: Tính khoảng cách giữa 2 điểm trong không gian theo phương y
// Bài 561: Tính khoảng cách giữa 2 điểm trong không gian theo phương z
#include <iostream>
#include <cmath>
using namespace std;

struct Diem {
    float x;
    float y;
    float z;
};

Diem nhapDiem();

void xuatDiem(Diem diem);

float tinhKhoangCach(Diem diem1, Diem diem2);

float tinhKhoangCachPhuongX(Diem diem1, Diem diem2);

float tinhKhoangCachPhuongY(Diem diem1, Diem diem2);

float tinhKhoangCachPhuongZ(Diem diem1, Diem diem2);

int main() {
    cout << "Nhap diem 1: " << endl;
    Diem diem1 = nhapDiem();
    xuatDiem(diem1);
    cout << "Nhap diem 2: " << endl;
    Diem diem2 = nhapDiem();
    xuatDiem(diem2);
    cout << "Khoang cach giua 2 diem la: " << tinhKhoangCach(diem1, diem2) << endl;
    cout << "Khoang cach giua 2 diem theo phuong x la: " << tinhKhoangCachPhuongX(diem1, diem2) << endl;
    cout << "Khoang cach giua 2 diem theo phuong y la: " << tinhKhoangCachPhuongY(diem1, diem2) << endl;
    cout << "Khoang cach giua 2 diem theo phuong z la: " << tinhKhoangCachPhuongZ(diem1, diem2) << endl;
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

float tinhKhoangCach(Diem diem1, Diem diem2) {
    return sqrt(pow(diem1.x - diem2.x, 2) + pow(diem1.y - diem2.y, 2) + pow(diem1.z - diem2.z, 2));
}

float tinhKhoangCachPhuongX(Diem diem1, Diem diem2) {
    return abs(diem1.x - diem2.x);
}

float tinhKhoangCachPhuongY(Diem diem1, Diem diem2) {
    return abs(diem1.y - diem2.y);
}

float tinhKhoangCachPhuongZ(Diem diem1, Diem diem2) {
    return abs(diem1.z - diem2.z);
}
