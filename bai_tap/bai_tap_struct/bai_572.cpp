// Bài 572: Kiểm tra 1 tọa độ điểm có nằm trong đường tròn hay không
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

bool isInside(Diem diem, DuongTron dt);

int main() {
    cout << "Nhap duong tron: " << endl;
    DuongTron dt = nhapDuongTron();
    xuatDuongTron(dt);
    cout << "Nhap diem: " << endl;
    Diem diem = nhapDiem();
    xuatDiem(diem);
    if (isInside(diem, dt)) {
        cout << "Diem nam trong duong tron" << endl;
    } else {
        cout << "Diem khong nam trong duong tron" << endl;
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

DuongTron nhapDuongTron() {
    DuongTron dt;
    cout << "Nhap tam duong tron: " << endl;
    dt.tam = nhapDiem();
    cout << "Nhap ban kinh: ";
    cin >> dt.banKinh;
    return dt;
}

void xuatDuongTron(DuongTron dt) {
    cout << "Duong tron co tam la: (" << dt.tam.x << ", " << dt.tam.y << ") ";
    cout << "R: " << dt.banKinh << endl;
}

bool isInside(Diem diem, DuongTron dt) {
    float d = sqrt(pow(diem.x - dt.tam.x, 2) + pow(diem.y - dt.tam.y, 2));
    return d <= dt.banKinh;
}
