// Bài 516: Định nghĩa toán tử operator + - * / cho 2 phân số
#include <iostream>
using namespace std;

struct PhanSo {
    int tu;
    int mau;

    // Định nghĩa toán tử +
    PhanSo operator+(PhanSo ps) {
        PhanSo kq;
        kq.tu = tu * ps.mau + ps.tu * mau;
        kq.mau = mau * ps.mau;
        return kq;
    }

    // Định nghĩa toán tử -
    PhanSo operator-(PhanSo ps) {
        PhanSo kq;
        kq.tu = tu * ps.mau - ps.tu * mau;
        kq.mau = mau * ps.mau;
        return kq;
    }

    // Định nghĩa toán tử *
    PhanSo operator*(PhanSo ps) {
        PhanSo kq;
        kq.tu = tu * ps.tu;
        kq.mau = mau * ps.mau;
        return kq;
    }

    // Định nghĩa toán tử /
    PhanSo operator/(PhanSo ps) {
        PhanSo kq;
        kq.tu = tu * ps.mau;
        kq.mau = mau * ps.tu;
        return kq;
    }
};

PhanSo nhapPhanSo();

void xuatPhanSo(PhanSo ps);

int main() {
    PhanSo ps1 = nhapPhanSo();
    xuatPhanSo(ps1);
    PhanSo ps2 = nhapPhanSo();
    xuatPhanSo(ps2);

    cout << "Tong: ";
    PhanSo ps3 = ps1 + ps2;
    xuatPhanSo(ps3);

    cout << "Hieu: ";
    ps3 = ps1 - ps2;
    xuatPhanSo(ps3);

    cout << "Tich: ";
    ps3 = ps1 * ps2;
    xuatPhanSo(ps3);

    cout << "Thuong: ";
    ps3 = ps1 / ps2;
    xuatPhanSo(ps3);

    return 0;
}

PhanSo nhapPhanSo() {
    PhanSo ps;
    cout << "Nhap tu: ";
    cin >> ps.tu;
    cout << "Nhap mau: ";
    cin >> ps.mau;
    if (ps.mau == 0 || ps.tu == 0) {
        cout << "Phan so khong hop le, nhap lai." << endl;
        return nhapPhanSo();
    }
    return ps;
}

void xuatPhanSo(PhanSo ps) {
    cout << ps.tu << "/" << ps.mau << endl;
}
