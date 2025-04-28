// Bài 515: So sánh 2 phân số: hàm trả về 1 trong 3 giá trị: 0,-1,1
#include <iostream>
using namespace std;

struct PhanSo {
    int tu;
    int mau;
};

PhanSo nhapPhanSo();

void xuatPhanSo(PhanSo ps);

int soSanhHaiPhanSo(PhanSo ps1, PhanSo ps2);

int main() {
    PhanSo ps1 = nhapPhanSo();
    xuatPhanSo(ps1);
    PhanSo ps2 = nhapPhanSo();
    xuatPhanSo(ps2);
    int kq = soSanhHaiPhanSo(ps1, ps2);
    if (kq == 0) {
        cout << "Hai phan so bang nhau";
    } else if (kq == -1) {
        cout << "Phan so thu nhat be hon phan so thu hai";
    } else {
        cout << "Phan so thu nhat lon hon phan so thu hai";
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

int soSanhHaiPhanSo(PhanSo ps1, PhanSo ps2) {
    if (ps1.tu * ps2.mau < ps2.tu * ps1.mau) {
        return -1;
    } else if (ps1.tu * ps2.mau == ps2.tu * ps1.mau) {
        return 0;
    } else {
        return 1;
    }
}