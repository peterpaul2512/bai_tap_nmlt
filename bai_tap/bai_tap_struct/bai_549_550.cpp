// Bài 549: Tìm điểm đối xứng qua đường phân giác thứ 1 (y=x)
// Bài 550: Tìm điểm đối xứng qua đường phân giác thứ 2 (y=-x)
#include <iostream>
using namespace std;

struct Diem {
    float x;
    float y;
};

Diem nhapDiem();

void xuatDiem(Diem diem);

Diem diemDoiXung1(Diem diem);

Diem diemDoiXung2(Diem diem);

int main() {
    Diem diem = nhapDiem();
    xuatDiem(diem);
    cout << "Diem doi xung qua duong phan gac thu 1 (y = x): ";
    Diem diemDoiXung = diemDoiXung1(diem);
    xuatDiem(diemDoiXung);
    cout << endl;
    cout << "Diem doi xung qua duong phan gac thu 2 (y = -x): ";
    diemDoiXung = diemDoiXung2(diem);
    xuatDiem(diemDoiXung);
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

Diem diemDoiXung1(Diem diem) {
    Diem diemDoiXung;
    diemDoiXung.x = diem.y;
    diemDoiXung.y = diem.x;
    return diemDoiXung;
}

Diem diemDoiXung2(Diem diem) {
    Diem diemDoiXung;
    diemDoiXung.x = -diem.x;
    diemDoiXung.y = -diem.y;
    return diemDoiXung;
}
