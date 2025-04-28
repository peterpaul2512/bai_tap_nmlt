// Bài 543: Tính khoảng cách giữa 2 điểm
#include <iostream>
#include <math.h>
using namespace std;

struct Diem {
    int x;
    int y;
};

Diem nhapDiem();

void xuatDiem(Diem);

float tinhKhoangCach(Diem, Diem);

int main() {
    cout << "Nhap diem thu nhat: " << endl;
    Diem diem1 = nhapDiem();
    cout << "Nhap diem thu hai: " << endl;
    Diem diem2 = nhapDiem();
    float kc = tinhKhoangCach(diem1, diem2);
    cout << "Khoang cach giua 2 diem: " << kc;
    return 0;
}

Diem nhapDiem() {
    Diem diem;
    cout << "Nhap hoanh do: ";
    cin >> diem.x;
    cout << "Nhap tung do: ";
    cin >> diem.y;
    return diem;
}

void xuatDiem(Diem diem) {
    cout << "(" << diem.x << "," << diem.y << ")";
}

float tinhKhoangCach(Diem diem1, Diem diem2) {
    return sqrt(pow(diem1.x - diem2.x, 2) + pow(diem1.y - diem2.y, 2));
}