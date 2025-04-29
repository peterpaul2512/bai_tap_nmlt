// Bài 585: Tính chu vi tam giác
// Bài 586: Tính diện tích tam giác
// Bài 587: Tìm tọa độ trọng tâm tam giác
#include <iostream>
#include <math.h>
using namespace std;

struct Diem {
    float x;
    float y;
};

struct TamGiac {
    Diem A;
    Diem B;
    Diem C;
};

Diem nhapDiem();

void xuatDiem(Diem diem);

TamGiac nhapTamGiac();

void xuatTamGiac(TamGiac tg);

float tinhKhoangCachGiuaHaiDiem(Diem A, Diem B);

bool kiemTraTamGiac(TamGiac tg);

float tinhChuViTamGiac(TamGiac tg);

float tinhDienTichTamGiac(TamGiac tg);

Diem tinhToaDoTrongTamTamGiac(TamGiac tg);

int main() {
    TamGiac tg = nhapTamGiac();
    xuatTamGiac(tg);
    if (kiemTraTamGiac(tg)) {
        cout << "3 diem A, B, C la 3 dinh cua 1 tam giac" << endl;
        cout << "Chu vi tam giac: " << tinhChuViTamGiac(tg) << endl;
        cout << "Dien tich tam giac: " << tinhDienTichTamGiac(tg) << endl;
        Diem toaDoTrongTam = tinhToaDoTrongTamTamGiac(tg);
        cout << "Toa do trong tam tam giac: (" << toaDoTrongTam.x << ", " << toaDoTrongTam.y << ")" << endl;
    } else {
        cout << "3 diem A, B, C khong la 3 dinh cua 1 tam giac" << endl;
    }
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

TamGiac nhapTamGiac() {
    TamGiac tg;
    cout << "Nhap dinh A: " << endl;
    tg.A = nhapDiem();
    cout << "Nhap dinh B: " << endl;
    tg.B = nhapDiem();
    cout << "Nhap dinh C: " << endl;
    tg.C = nhapDiem();
    return tg;
}

void xuatTamGiac(TamGiac tg) {
    cout << "Tam giac: ((" << tg.A.x << ", " << tg.A.y << "); (" << tg.B.x << ", " << tg.B.y << "); (" << tg.C.x << ", "
            << tg.C.y << "))" << endl;
}

float tinhKhoangCachGiuaHaiDiem(Diem A, Diem B) {
    return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
}

bool kiemTraTamGiac(TamGiac tg) {
    float AB = tinhKhoangCachGiuaHaiDiem(tg.A, tg.B);
    float BC = tinhKhoangCachGiuaHaiDiem(tg.B, tg.C);
    float CA = tinhKhoangCachGiuaHaiDiem(tg.C, tg.A);
    if (AB + BC > CA && AB + CA > BC && BC + CA > AB) {
        return true;
    } else {
        return false;
    }
}

float tinhChuViTamGiac(TamGiac tg) {
    float AB = tinhKhoangCachGiuaHaiDiem(tg.A, tg.B);
    float BC = tinhKhoangCachGiuaHaiDiem(tg.B, tg.C);
    float CA = tinhKhoangCachGiuaHaiDiem(tg.C, tg.A);
    return AB + BC + CA;
}

float tinhDienTichTamGiac(TamGiac tg) {
    float AB = tinhKhoangCachGiuaHaiDiem(tg.A, tg.B);
    float BC = tinhKhoangCachGiuaHaiDiem(tg.B, tg.C);
    float CA = tinhKhoangCachGiuaHaiDiem(tg.C, tg.A);
    float p = (AB + BC + CA) / 2;
    return sqrt(p * (p - AB) * (p - BC) * (p - CA));
}

Diem tinhToaDoTrongTamTamGiac(TamGiac tg) {
    Diem toaDoTrongTam;
    toaDoTrongTam.x = (tg.A.x + tg.B.x + tg.C.x) / 3;
    toaDoTrongTam.y = (tg.A.y + tg.B.y + tg.C.y) / 3;
    return toaDoTrongTam;
}
