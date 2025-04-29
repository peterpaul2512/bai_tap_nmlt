// Bài 569: Tính chu vi đường tròn
// Bài 570: Tính diện tích đường tròn
#include <iostream>
#include <math.h>
using namespace std;

struct Diem {
    float x;
    float y;
};

struct DuongTron {
    Diem tam;
    float banKinh;
};

Diem nhapDiem();

void xuatDiem(Diem diem);

DuongTron nhapDuongTron();

void xuatDuongTron(DuongTron dt);

float tinhChuViDuongTron(DuongTron dt);

float tinhDienTichDuongTron(DuongTron dt);

int main() {
    DuongTron dt = nhapDuongTron();
    xuatDuongTron(dt);
    cout << "Chu vi duong tron: " << tinhChuViDuongTron(dt) << endl;
    cout << "Dien tich duong tron: " << tinhDienTichDuongTron(dt) << endl;
    return 0;
}

Diem nhapDiem() {
    Diem diem;
    cout << "Nhap x: ";
    cin >> diem.x;
    cout << "Nhap y: ";
    cin >> diem.y;
    return diem;
}

void xuatDiem(Diem diem) {
    cout << "(" << diem.x << ", " << diem.y << ")" << endl;
}

DuongTron nhapDuongTron() {
    DuongTron dt;
    cout << "Nhap tam duong tron: " << endl;
    dt.tam = nhapDiem();
    cout << "Nhap ban kinh: ";
    cin >> dt.banKinh;
    return dt;
}

void xuatDuongTron(DuongTron dt) {
    cout << "Duong tron co tam la: ";
    xuatDiem(dt.tam);
    cout << "Ban kinh: " << dt.banKinh << endl;
}

float tinhChuViDuongTron(DuongTron dt) {
    return 2 * M_PI * dt.banKinh;
}

float tinhDienTichDuongTron(DuongTron dt) {
    return M_PI * dt.banKinh * dt.banKinh;
}
