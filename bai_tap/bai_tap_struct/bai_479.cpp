// Bài 479: Hãy khai báo kiểu dữ liệu biểu diễn khái niệm đơn thức P(x) = ax^n trong toán học và định nghĩa và định nghĩa hàm nhập,
// hàm xuất cho kiểu dữ liệu này
#include <iostream>
using namespace std;

struct DonThuc {
    float a;
    int n;
};

DonThuc nhapDonThuc();

void xuatDonThuc(DonThuc dt);

int main() {
    DonThuc dt = nhapDonThuc();
    xuatDonThuc(dt);
    return 0;
}

DonThuc nhapDonThuc() {
    DonThuc dt;
    cout << "Nhap he so: ";
    cin >> dt.a;
    cout << "Nhap so mu: ";
    cin >> dt.n;
    return dt;
}

void xuatDonThuc(DonThuc dt) {
    cout << dt.a << "x^" << dt.n;
}
