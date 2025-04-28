// Bài 513: Kiểm tra phân số dương
#include <iostream>
using namespace std;

struct PhanSo {
    int tu;
    int mau;
};

PhanSo nhapPhanSo();

void xuatPhanSo(PhanSo ps);

bool kiemTraPhanSoDuong(PhanSo ps);

int main() {
    PhanSo ps = nhapPhanSo();
    xuatPhanSo(ps);
    if (kiemTraPhanSoDuong(ps)) {
        cout << "Phan so duong";
    } else {
        cout << "Phan so am";
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

bool kiemTraPhanSoDuong(PhanSo ps) {
    if (ps.tu * ps.mau > 0) {
        return true;
    }
    return false;
}
