// Bài 544: Tính khoảng cách 2 điểm theo phương Ox
#include <iostream>
#include <math.h>
using namespace std;

struct Diem {
    float x;
    float y;
};

Diem nhapDiem();

void xuatDiem(Diem);

float tinhKhoangCach(Diem diem1, Diem diem2);

int main() {
    Diem diem1 = nhapDiem();
    Diem diem2 = nhapDiem();
    float kc = tinhKhoangCach(diem1, diem2);
    cout << "Khoang cach giua 2 diem theo phuong Ox: " << kc;
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

float tinhKhoangCach(Diem diem1, Diem diem2) {
    return abs(diem1.x - diem2.x);
}
