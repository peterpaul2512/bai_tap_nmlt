// Bài 546: Tìm tọa độ điểm đối xứng qua gốc tọa độ
#include <iostream>
using namespace std;

struct Diem {
    float x;
    float y;
};

Diem nhapDiem();

void xuatDiem(Diem);

Diem diemDoiXung(Diem);

int main() {
    Diem diem = nhapDiem();
    Diem doiXung = diemDoiXung(diem);
    cout << "Diem doi xung qua goc toa do: ";
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

Diem diemDoiXung(Diem diem) {
    Diem doiXung;
    doiXung.x = -diem.x;
    doiXung.y = -diem.y;
    return doiXung;
}
