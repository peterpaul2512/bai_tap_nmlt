// Bài 486: Tính tích 2 đơn thức
#include <iostream>
using namespace std;

struct DonThuc {
    int heso;
    int somu;
};

DonThuc NhapDonThuc();

void XuatDonThuc(DonThuc dt);

DonThuc TichHaiDonThuc(DonThuc dt1, DonThuc dt2);

int main() {
    DonThuc dt1 = NhapDonThuc();
    DonThuc dt2 = NhapDonThuc();
    XuatDonThuc(dt1);
    XuatDonThuc(dt2);
    DonThuc dt3 = TichHaiDonThuc(dt1, dt2);
    XuatDonThuc(dt3);
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

DonThuc TichHaiDonThuc(DonThuc dt1, DonThuc dt2) {
    DonThuc dt3;
    dt3.heso = dt1.heso * dt2.heso;
    dt3.somu = dt1.somu + dt2.somu;
    return dt3;
}
