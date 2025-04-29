// Bài 584: Kiểm tra tọa độ 3 đỉnh có thật sự lập thành 3 đỉnh của 1 tam giác không
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

int main() {
    TamGiac tg = nhapTamGiac();
    xuatTamGiac(tg);
    if (kiemTraTamGiac(tg)) {
        cout << "3 diem A, B, C la 3 dinh cua 1 tam giac" << endl;
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
