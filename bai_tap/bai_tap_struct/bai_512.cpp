// Bài 512: Qui đồng phân số
#include <iostream>
using namespace std;

struct PhanSo {
    int tu;
    int mau;
};

PhanSo nhapPhanSo();

void xuatPhanSo(PhanSo ps);

PhanSo quiDongPhanSo(PhanSo ps1, PhanSo ps2);

int main() {
    PhanSo ps1 = nhapPhanSo();
    xuatPhanSo(ps1);
    PhanSo ps2 = nhapPhanSo();
    xuatPhanSo(ps2);
    PhanSo ps3 = quiDongPhanSo(ps1, ps2);
    cout << "Phan so sau khi qui dong: ";
    xuatPhanSo(ps3);
    return 0;
}

PhanSo nhapPhanSo() {
    PhanSo ps;
    cout << "Nhap tu: ";
    cin >> ps.tu;
    cout << "Nhap mau: ";
    cin >> ps.mau;
    return ps;
}

void xuatPhanSo(PhanSo ps) {
    cout << ps.tu << "/" << ps.mau << endl;
}

PhanSo quiDongPhanSo(PhanSo ps1, PhanSo ps2) {
    PhanSo ps3;
    ps3.tu = ps1.tu * ps2.mau + ps1.mau * ps2.tu;
    ps3.mau = ps1.mau * ps2.mau;
    return ps3;
}
