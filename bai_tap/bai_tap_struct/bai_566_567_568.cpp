// Bài 566: Khai báo kiểu dữ liệu để biểu diễn đường tròn
// Bài 567: Nhập đường tròn
// Bài 568: Xuất đường tròn theo định dạng ((x, y), r)
#include <iostream>
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

int main() {
    DuongTron dt = nhapDuongTron();
    xuatDuongTron(dt);
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
