// Bài 492: Định nghĩa toán tử (operator /) cho 2 đơn thức
#include <iostream>
using namespace std;

struct DonThuc {
    float heso;
    float somu;

    // Định nghĩa toán tử / để chia hai đơn thức
    DonThuc operator/(const DonThuc &other) {
        DonThuc result;
        result.heso = this->heso / other.heso; // Chia hệ số
        result.somu = this->somu - other.somu; // Trừ số mũ
        return result;
    }
};

DonThuc nhapDonThuc();

void xuatDonThuc(DonThuc dt);

int main() {
    DonThuc dt1 = nhapDonThuc();
    DonThuc dt2 = nhapDonThuc();
    xuatDonThuc(dt1);
    xuatDonThuc(dt2);
    DonThuc dt3 = dt1 / dt2; // Sử dụng toán tử chia giữa hai đơn thức
    cout << "Ket qua chia 2 don thuc: ";
    xuatDonThuc(dt3);
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
