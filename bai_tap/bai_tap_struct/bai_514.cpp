// Bài 514: Kiểm tra phân số âm
#include <iostream>
using namespace std;

struct PhanSo {
    int tu;
    int mau;
};

PhanSo nhapPhanSo();

void xuatPhanSo(PhanSo ps);

bool kiemTraPhanSoAm(PhanSo ps);

int main() {
    PhanSo ps = nhapPhanSo();
    xuatPhanSo(ps);
    if (kiemTraPhanSoAm(ps)) {
        cout << "Phan so am";
    } else {
        cout << "Phan so duong";
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

bool kiemTraPhanSoAm(PhanSo ps) {
    if (ps.tu * ps.mau < 0) {
        return true;
    }
    return false;
}
