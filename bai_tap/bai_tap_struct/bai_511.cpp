// Bài 511: Kiểm tra phân số tối giản
#include <iostream>
using namespace std;

struct PhanSo {
    int tu;
    int mau;
};

PhanSo nhapPhanSo();

void xuatPhanSo(PhanSo ps);

int uocChungLonNhat(int a, int b);

PhanSo rutGonPhanSo(PhanSo ps);

bool kiemTraPhanSoToiGian(PhanSo ps);

int main() {
    PhanSo ps = nhapPhanSo();
    xuatPhanSo(ps);
    if (kiemTraPhanSoToiGian(ps)) {
        cout << "Phan so toi gian";
    } else {
        cout << "Phan so khong toi gian";
    }
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
    ps.tu /= ucln;
    ps.mau /= ucln;
    return ps;
}

bool kiemTraPhanSoToiGian(PhanSo ps) {
    PhanSo ps1 = rutGonPhanSo(ps);
    if (ps1.tu == ps.tu) {
        return true;
    }
    return false;
}
