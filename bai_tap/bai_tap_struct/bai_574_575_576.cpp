// Bài 574: Khai báo kiểu dữ liệu để biểu diễn hình cầu trong không gian Oxyz
// Bài 575: Nhập hình cầu
// Bài 576: Xuất hình cầu theo định dạng ((x, y, z), r)
#include <iostream>
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

int main() {
    HinhCau hc = nhapHinhCau();
    xuatHinhCau(hc);
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
