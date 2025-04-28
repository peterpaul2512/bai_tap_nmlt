// Bài 489: Tính đạo hàm cấp k đơn thức
#include <iostream>
using namespace std;

struct DonThuc {
    int heso;
    int somu;
};

DonThuc nhapDonThuc();

void xuatDonThuc(DonThuc dt);

DonThuc daoHamCapK(DonThuc dt, int k);

int main() {
    DonThuc dt = nhapDonThuc();
    int k;
    cout << "Nhap cap k: ";
    cin >> k;
    DonThuc dt1 = daoHamCapK(dt, k);
    xuatDonThuc(dt1);
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
    if (dt.somu < 0) {
        cout << "Dao ham cua don thuc bang 0" << endl;
    } else {
        cout << dt.heso << "x^" << dt.somu << endl;
    }
}

DonThuc daoHamCapK(DonThuc dt, int k) {
    DonThuc dt1 = dt;
    for (int i = 1; i <= k; i++) {
        if (dt1.somu == 0) {
            // Nếu số mũ bằng 0, đạo hàm sẽ là 0.
            dt1.heso = 0;
            dt1.somu = -1;
            break;
        }
        dt1.heso = dt1.heso * dt1.somu;
        dt1.somu = dt1.somu - 1;
    }
    return dt1;
}
