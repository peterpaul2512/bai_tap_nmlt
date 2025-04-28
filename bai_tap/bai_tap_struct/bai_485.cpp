// Bài 485: Viết chương trình nhập tọa độ 3 đỉnh của 1 tam giác trong mặt phẳng Oxy.
// Tính diện tích, chu vi và tọa độ trọng tâm của tam giác và xuất ra kết quả
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

// Hàm nhập tọa độ 1 điểm
Diem NhapDiem();

// Hàm nhập 1 tam giác
TamGiac NhapTamGiac();

// Hàm xuất thông tin 1 tam giác
void XuatTamGiac(const TamGiac &tamgiac);

// Hàm tính chu vi
float TinhChuVi(const TamGiac &tamgiac);

// Hàm tính diện tích
float TinhDienTich(const TamGiac &tamgiac);

// Hàm tính tọa độ trọng tâm
Diem TinhToaDoTrongTam(const TamGiac &tamgiac);

int main() {
    TamGiac tamgiac = NhapTamGiac();
    XuatTamGiac(tamgiac);
    cout << "Chu vi tam giac la: " << TinhChuVi(tamgiac) << endl;
    cout << "Dien tich tam giac la: " << TinhDienTich(tamgiac) << endl;
    Diem trongtam = TinhToaDoTrongTam(tamgiac);
    cout << "Toa do trong tam tam giac la: (" << trongtam.x << ", " << trongtam.y << ")" << endl;
    return 0;
}

Diem NhapDiem() {
    Diem diem;
    cout << "Nhap hoanh do: ";
    cin >> diem.x;
    cout << "Nhap tung do: ";
    cin >> diem.y;
    return diem;
}

TamGiac NhapTamGiac() {
    TamGiac tamgiac;
    cout << "Nhap toa do dinh A: " << endl;
    tamgiac.A = NhapDiem();
    cout << "Nhap toa do dinh B: " << endl;
    tamgiac.B = NhapDiem();
    cout << "Nhap toa do dinh C: " << endl;
    tamgiac.C = NhapDiem();
    return tamgiac;
}

void XuatTamGiac(const TamGiac &tamgiac) {
    cout << "Toa do dinh A: (" << tamgiac.A.x << ", " << tamgiac.A.y << ")" << endl;
    cout << "Toa do dinh B: (" << tamgiac.B.x << ", " << tamgiac.B.y << ")" << endl;
    cout << "Toa do dinh C: (" << tamgiac.C.x << ", " << tamgiac.C.y << ")" << endl;
}

float TinhChuVi(const TamGiac &tamgiac) {
    float AB = sqrt(pow(tamgiac.B.x - tamgiac.A.x, 2) + pow(tamgiac.B.y - tamgiac.A.y, 2));
    float AC = sqrt(pow(tamgiac.C.x - tamgiac.A.x, 2) + pow(tamgiac.C.y - tamgiac.A.y, 2));
    float BC = sqrt(pow(tamgiac.C.x - tamgiac.B.x, 2) + pow(tamgiac.C.y - tamgiac.B.y, 2));
    return AB + AC + BC;
}

float TinhDienTich(const TamGiac &tamgiac) {
    float AB = sqrt(pow(tamgiac.B.x - tamgiac.A.x, 2) + pow(tamgiac.B.y - tamgiac.A.y, 2));
    float AC = sqrt(pow(tamgiac.C.x - tamgiac.A.x, 2) + pow(tamgiac.C.y - tamgiac.A.y, 2));
    float BC = sqrt(pow(tamgiac.C.x - tamgiac.B.x, 2) + pow(tamgiac.C.y - tamgiac.B.y, 2));
    // công thức Heron
    float p = (AB + AC + BC) / 2;
    return sqrt(p * (p - AB) * (p - AC) * (p - BC));
}

Diem TinhToaDoTrongTam(const TamGiac &tamgiac) {
    Diem trongtam;
    trongtam.x = (tamgiac.A.x + tamgiac.B.x + tamgiac.C.x) / 3;
    trongtam.y = (tamgiac.A.y + tamgiac.B.y + tamgiac.C.y) / 3;
    return trongtam;
}
