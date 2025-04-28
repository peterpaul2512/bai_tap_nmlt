// Bài 490: Tính giá trị đơn thức tại vị trí x=x0
#include <iostream>
#include <cmath>
using namespace std;

struct DonThuc {
    int heso;
    int somu;
};

DonThuc nhapDonThuc();

void xuatDonThuc(DonThuc dt);

int giaTriDonThuc(DonThuc dt, int x);

int main() {
    DonThuc dt = nhapDonThuc();
    xuatDonThuc(dt);
    int x;
    cout << "Nhap x: ";
    cin >> x;
    int giaTri = giaTriDonThuc(dt, x);
    cout << "Gia tri cua don thuc tai x = " << x << " la: " << giaTri << endl;
    return 0;
}

DonThuc nhapDonThuc() {
    DonThuc dt;
    cout << "Nhap he so: ";
    cin >> dt.heso;
    cout << "Nhap so mu: ";
    cin >> dt.somu;
    return dt;
}

void xuatDonThuc(DonThuc dt) {
    cout << dt.heso << "x^" << dt.somu << endl;
}

int giaTriDonThuc(DonThuc dt, int x) {
    return dt.heso * pow(x, dt.somu);
}
