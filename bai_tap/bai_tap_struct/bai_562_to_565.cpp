// Bài 562: Tìm tọa độ điểm đối xứng qua gốc tọa độ
// Bài 563: Tìm tọa độ điểm đối xứng qua mặt phẳng Oxy
// Bài 564: Tìm tọa độ điểm đối xứng qua mặt phẳng Oxz
// Bài 565: Tìm tọa độ điểm đối xứng qua mặt phẳng Oyz
#include <iostream>
#include <cmath>
using namespace std;

struct Diem {
    float x;
    float y;
    float z;
};

Diem nhapDiem();

void xuatDiem(Diem diem);

Diem doiXungQuaGocToaDo(Diem diem);

Diem doiXungQuaMatPhangOxy(Diem diem);

Diem doiXungQuaMatPhangOxz(Diem diem);

Diem doiXungQuaMatPhangOyz(Diem diem);

int main() {
    Diem diem = nhapDiem();
    xuatDiem(diem);
    cout << "Diem doi xung qua goc toa do la: ";
    xuatDiem(doiXungQuaGocToaDo(diem));
    cout << "Diem doi xung qua mat phang Oxy la: ";
    xuatDiem(doiXungQuaMatPhangOxy(diem));
    cout << "Diem doi xung qua mat phang Oxz la: ";
    xuatDiem(doiXungQuaMatPhangOxz(diem));
    cout << "Diem doi xung qua mat phang Oyz la: ";
    xuatDiem(doiXungQuaMatPhangOyz(diem));
    return 0;
}

Diem nhapDiem() {
    Diem diem;
    cout << "Nhap x: ";
    cin >> diem.x;
    cout << "Nhap y: ";
    cin >> diem.y;
    cout << "Nhap z: ";
    cin >> diem.z;
    return diem;
}

void xuatDiem(Diem diem) {
    cout << "(" << diem.x << ", " << diem.y << ", " << diem.z << ")" << endl;
}

Diem doiXungQuaGocToaDo(Diem diem) {
    Diem diemDoiXung;
    diemDoiXung.x = -diem.x;
    diemDoiXung.y = -diem.y;
    diemDoiXung.z = -diem.z;
    return diemDoiXung;
}

Diem doiXungQuaMatPhangOxy(Diem diem) {
    Diem diemDoiXung;
    diemDoiXung.x = diem.x;
    diemDoiXung.y = diem.y;
    diemDoiXung.z = -diem.z;
    return diemDoiXung;
}

Diem doiXungQuaMatPhangOxz(Diem diem) {
    Diem diemDoiXung;
    diemDoiXung.x = diem.x;
    diemDoiXung.y = -diem.y;
    diemDoiXung.z = diem.z;
    return diemDoiXung;
}

Diem doiXungQuaMatPhangOyz(Diem diem) {
    Diem diemDoiXung;
    diemDoiXung.x = -diem.x;
    diemDoiXung.y = diem.y;
    diemDoiXung.z = diem.z;
    return diemDoiXung;
}
