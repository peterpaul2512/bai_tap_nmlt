// Bài 487: Tính đạo hàm cấp 1 đơn thức
#include <iostream>
using namespace std;

struct DonThuc {
    int heso;
    int somu;
};

DonThuc NhapDonThuc();

void XuatDonThuc(DonThuc dt);

DonThuc DaoHamCap1(DonThuc dt);

int main() {
    DonThuc dt = NhapDonThuc();
    XuatDonThuc(dt);
    DonThuc dt1 = DaoHamCap1(dt);
    XuatDonThuc(dt1);
    return 0;
}

DonThuc NhapDonThuc() {
    DonThuc dt;
    cout << "Nhap he so: ";
    cin >> dt.heso;
    cout << "Nhap so mu: ";
    cin >> dt.somu;
    return dt;
}

void XuatDonThuc(DonThuc dt) {
    cout << dt.heso << "x^" << dt.somu << endl;
}

DonThuc DaoHamCap1(DonThuc dt) {
    DonThuc dt1;
    dt1.heso = dt.heso * dt.somu;
    dt1.somu = dt.somu - 1;
    return dt1;
}
