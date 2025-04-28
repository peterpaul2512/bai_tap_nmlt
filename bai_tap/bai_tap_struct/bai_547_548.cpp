//Bài 547: Tìm điểm đối xứng qua trục hoành
// Bài 548: Tìm điểm đối xứng qua trục tung
#include <iostream>
using namespace std;

struct Diem {
    float x;
    float y;
};

Diem nhapDiem();

void xuatDiem(Diem);

Diem diemDoiXungTrucHoanh(Diem diem);
Diem diemDoiXungTrucTung(Diem diem);

int main() {
    Diem diem = nhapDiem();
    Diem doiXung = diemDoiXungTrucHoanh(diem);
    cout << "Diem doi xung truc hoanh: ";
    xuatDiem(doiXung);
    cout << endl;

    doiXung = diemDoiXungTrucTung(diem);
    cout << "Diem doi xung truc tung: ";
    xuatDiem(doiXung);
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

Diem diemDoiXungTrucHoanh(Diem diem) {
    Diem doiXung;
    doiXung.x = diem.x;
    doiXung.y = -diem.y;
    return doiXung;
}

Diem diemDoiXungTrucTung(Diem diem) {
    Diem doiXung;
    doiXung.x = -diem.x;
    doiXung.y = diem.y;
    return doiXung;
}