// Bài 581: Khai báo kiểu dữ liệu để biểu diễn tam giác trong mặt phẳng Oxy
// Bài 582: Nhập tam giác
// Bài 583: Xuất tam giác theo định dạng ((x1, y1); (x2, y2); (x3, y3))
#include <iostream>
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

int main() {
    TamGiac tg = nhapTamGiac();
    xuatTamGiac(tg);
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