// Bài 571: Xét vị trí tương đối giữa 2 đường tròn( không cắt nhau, tiếp xúc, cắt nhau)
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

float tinhKhoangCachGiuaHaiDiem(Diem diem1, Diem diem2);

void xuatViTriCuaHaiDuongTron(DuongTron dt1, DuongTron dt2);

int main() {
    cout << "Nhap duong tron thu nhat: " << endl;
    DuongTron dt1 = nhapDuongTron();
    xuatDuongTron(dt1);
    cout << "Nhap duong tron thu hai: " << endl;
    DuongTron dt2 = nhapDuongTron();
    xuatDuongTron(dt2);
    xuatViTriCuaHaiDuongTron(dt1, dt2);
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

float tinhKhoangCachGiuaHaiDiem(Diem diem1, Diem diem2) {
    return sqrt(pow(diem1.x - diem2.x, 2) + pow(diem1.y - diem2.y, 2));
}

void xuatViTriCuaHaiDuongTron(DuongTron dt1, DuongTron dt2) {
    float d = tinhKhoangCachGiuaHaiDiem(dt1.tam, dt2.tam);

    // Kiểm tra đồng tâm trước
    if (d == 0) {
        if (dt1.banKinh == dt2.banKinh) {
            cout << "Hai duong tron trung nhau (dong tam)" << endl;
        } else {
            cout << "Hai duong tron dong tam, mot duong tron nam trong duong tron kia" << endl;
        }
    } else {
        // Không đồng tâm, xét các trường hợp khác
        if (d > dt1.banKinh + dt2.banKinh) {
            cout << "Hai duong tron khong giao nhau (tach roi)" << endl;
        } else if (d == dt1.banKinh + dt2.banKinh) {
            cout << "Hai duong tron tiep xuc ngoai" << endl;
        } else if (d < abs(dt1.banKinh - dt2.banKinh)) {
            cout << "Hai duong tron dung nhau (khong giao nhau)" << endl;
        } else if (d == abs(dt1.banKinh - dt2.banKinh)) {
            cout << "Hai duong tron tiep xuc trong" << endl;
        } else if (d > abs(dt1.banKinh - dt2.banKinh) && d < dt1.banKinh + dt2.banKinh) {
            cout << "Hai duong tron cat nhau tai hai diem" << endl;
        }
    }
}