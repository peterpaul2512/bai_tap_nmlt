// Bài 491: Định nghĩa toán tử (operator *) cho 2 đơn thức
#include <iostream>
using namespace std;

struct DonThuc {
    int heso;
    int somu;

    // Định nghĩa toán tử * để nhân hai đơn thức
    DonThuc operator*(const DonThuc &other) {
        DonThuc result;
        result.heso = this->heso * other.heso; // Nhân hệ số
        result.somu = this->somu + other.somu; // Cộng số mũ
        return result;
    }
};

DonThuc nhapDonThuc();

void xuatDonThuc(DonThuc dt);

int main() {
    DonThuc dt1 = nhapDonThuc();
    DonThuc dt2 = nhapDonThuc();
    DonThuc dt3 = dt1 * dt2; // Sử dụng toán tử nhân giữa hai đơn thức
    cout << "Ket qua nhan hai don thuc: ";
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
