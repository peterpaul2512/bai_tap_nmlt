// Bài 507: Tính tổng 2 phân số
#include <iostream>
using namespace std;

struct PhanSo {
    int tu;
    int mau;
};

PhanSo nhapPhanSo();

void xuatPhanSo(PhanSo ps);

PhanSo tinhTongHaiPhanSo(PhanSo ps1, PhanSo ps2);

int uocChungLonNhat(int a, int b);

PhanSo rutGonPhanSo(PhanSo ps);

int main() {
    PhanSo ps1 = nhapPhanSo();
    xuatPhanSo(ps1);
    PhanSo ps2 = nhapPhanSo();
    xuatPhanSo(ps2);
    PhanSo ps3 = tinhTongHaiPhanSo(ps1, ps2);
    xuatPhanSo(rutGonPhanSo(ps3));
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

PhanSo tinhTongHaiPhanSo(PhanSo ps1, PhanSo ps2) {
    PhanSo ps3;
    ps3.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
    ps3.mau = ps1.mau * ps2.mau;
    return ps3;
}

int uocChungLonNhat(int a, int b) {
    if (a < 0) {
        a = -a;
    }
    if (b < 0) {
        b = -b;
    }
    while (a * b != 0) {
        if (a > b) {
            a %= b;
        } else {
            b %= a;
        }
    }
    return a + b;
}

PhanSo rutGonPhanSo(PhanSo ps) {
    int ucln = uocChungLonNhat(ps.tu, ps.mau);
    ps.tu = ps.tu / ucln;
    ps.mau = ps.mau / ucln;
    return ps;
}
