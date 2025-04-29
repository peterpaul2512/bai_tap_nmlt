// Bài 590: Tính tổng khoảng cách từ điểm P(x, y) tới 3 đỉnh của tam giác
// Bài 591: Kiểm tra 1 tọa độ điểm có nằm trong tam giác hay không
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

float tinhTongKhoangCach(Diem P, TamGiac tg);

bool kiemTraDiemTrongTamGiac(Diem P, TamGiac tg);

int main() {
    TamGiac tg = nhapTamGiac();
    xuatTamGiac(tg);
    if (kiemTraTamGiac(tg)) {
        cout << "3 diem A, B, C la 3 dinh cua 1 tam giac" << endl;
        Diem P = nhapDiem();
        xuatDiem(P);
        if (kiemTraDiemTrongTamGiac(P, tg)) {
            cout << "Diem P nam trong tam giac" << endl;
        } else {
            cout << "Diem P khong nam trong tam giac" << endl;
        }
        float tongKhoangCach = tinhTongKhoangCach(P, tg);
        cout << "Tong khoang cach tu diem P toi 3 dinh cua tam giac la: " << tongKhoangCach << endl;
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

float tinhTongKhoangCach(Diem P, TamGiac tg) {
    float AP = tinhKhoangCachGiuaHaiDiem(tg.A, P);
    float BP = tinhKhoangCachGiuaHaiDiem(tg.B, P);
    float CP = tinhKhoangCachGiuaHaiDiem(tg.C, P);
    return AP + BP + CP;
}

// Hàm tính diện tích tam giác bằng tọa độ 3 đỉnh
float tinhDienTichTamGiac(Diem A, Diem B, Diem C) {
    return 0.5 * abs(A.x * (B.y - C.y) + B.x * (C.y - A.y) + C.x * (A.y - B.y));
}

bool kiemTraDiemTrongTamGiac(Diem P, TamGiac tg) {
    // Tính diện tích tam giác ABC
    float S_ABC = tinhDienTichTamGiac(tg.A, tg.B, tg.C);

    // Tính diện tích 3 tam giác PAB, PBC, PCA
    float S_PAB = tinhDienTichTamGiac(P, tg.A, tg.B);
    float S_PBC = tinhDienTichTamGiac(P, tg.B, tg.C);
    float S_PCA = tinhDienTichTamGiac(P, tg.C, tg.A);

    // Nếu tổng diện tích 3 tam giác con bằng diện tích tam giác ABC, điểm P nằm trong tam giác
    // Dùng một ngưỡng nhỏ (0.0001) để tránh sai số float
    return abs(S_ABC - (S_PAB + S_PBC + S_PCA)) < 0.0001;
}