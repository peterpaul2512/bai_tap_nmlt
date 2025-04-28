// Bài 476: Hãy khai báo kiểu dữ liệu biểu diễn khái niệm hỗn số trong toán học và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này
#include <iostream>
using namespace std;

struct PhanSo {
    int Tu;
    int Mau;
};

struct MixedNumber {
    int Nguyen;
    PhanSo PhanSo;
};

PhanSo nhapPhanSo();

void xuatPhanSo(PhanSo ps);

MixedNumber nhapMixedNumber();

void xuatMixedNumber(MixedNumber mn);

int main() {
    MixedNumber mn = nhapMixedNumber();
    xuatMixedNumber(mn);
    return 0;
}

PhanSo nhapPhanSo() {
    PhanSo ps;
    cout << "Nhap tu so: ";
    cin >> ps.Tu;
    cout << "Nhap mau so: ";
    cin >> ps.Mau;
    return ps;
}

void xuatPhanSo(PhanSo ps) {
    cout << ps.Tu << "/" << ps.Mau;
}

MixedNumber nhapMixedNumber() {
    MixedNumber mn;
    cout << "Nhap so nguyen: ";
    cin >> mn.Nguyen;
    mn.PhanSo = nhapPhanSo();
    return mn;
}

void xuatMixedNumber(MixedNumber mn) {
    cout << mn.Nguyen << " ";
    xuatPhanSo(mn.PhanSo);
}
