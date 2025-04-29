// Bài 577: Tính diện tích xung quanh hình cầu
// Bài 578: Tính thể tích hình cầu
#include <iostream>
#include <math.h>
using namespace std;

struct Diem {
    float x;
    float y;
    float z;
};

struct HinhCau {
    Diem tam;
    float banKinh;
};

Diem nhapDiem();

void xuatDiem(Diem diem);

HinhCau nhapHinhCau();

void xuatHinhCau(HinhCau hc);

float tinhDienTichXungQuanhHinhCau(HinhCau hc);

float tinhTheTichHinhCau(HinhCau hc);

int main() {
    HinhCau hc = nhapHinhCau();
    xuatHinhCau(hc);
    cout << "Dien tich xung quanh hinh cau: " << tinhDienTichXungQuanhHinhCau(hc) << endl;
    cout << "The tich hinh cau: " << tinhTheTichHinhCau(hc) << endl;
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

HinhCau nhapHinhCau() {
    HinhCau hc;
    cout << "Nhap tam hinh cau: " << endl;
    hc.tam = nhapDiem();
    cout << "Nhap ban kinh: ";
    cin >> hc.banKinh;
    return hc;
}

void xuatHinhCau(HinhCau hc) {
    cout << "Hinh cau : ((" << hc.tam.x << ", " << hc.tam.y << ", " << hc.tam.z << "), " << hc.banKinh << ")" << endl;
}

float tinhDienTichXungQuanhHinhCau(HinhCau hc) {
    return 4 * 3.14 * pow(hc.banKinh, 2);
}

float tinhTheTichHinhCau(HinhCau hc) {
    return 4 * 3.14 * pow(hc.banKinh, 3) / 3;
}
