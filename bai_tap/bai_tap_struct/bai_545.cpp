// Bài 545: Tính khoảng cách 2 điểm theo phương Oy
#include <iostream>
#include <math.h>
using namespace std;

struct Diem {
    int x;
    int y;
};

Diem nhapDiem();

void xuatDiem(Diem);

float tinhKhoangCach0y(Diem diem1, Diem diem2);

int main() {
    Diem diem1 = nhapDiem();
    Diem diem2 = nhapDiem();
    float kc = tinhKhoangCach0y(diem1, diem2);
    cout << "Khoang cach giua 2 diem theo phuong Oy: " << kc;
    return 0;
}

Diem nhapDiem() {
    Diem diem;
    cout << "Nhap hoanh do: ";
    cin >> diem.x;
    cout << "Nhap tung do: ";
    cin >> diem.y;
    return diem;
}

void xuatDiem(Diem diem) {
    cout << "(" << diem.x << "," << diem.y << ")";
}

float tinhKhoangCach0y(Diem diem1, Diem diem2) {
    return abs(diem1.y - diem2.y);
}
