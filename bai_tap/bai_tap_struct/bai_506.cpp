// Bài 506: rút gọn phân số
#include <iostream>
using namespace std;

struct PhanSo {
    int tu;
    int mau;
};

PhanSo nhapPhanSo();

void xuatPhanSo(PhanSo ps);

PhanSo rutGonPhanSo(PhanSo ps);

int uocChungLonNhat(int a, int b);

int main() {
    PhanSo ps = nhapPhanSo();
    xuatPhanSo(ps);
    PhanSo ps1 = rutGonPhanSo(ps);
    xuatPhanSo(ps1);
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
