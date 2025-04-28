// Bài 475: Hãy khai báo kiểu dữ liệu biểu diễn khái niệm phân số trong toán học và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này
#include <iostream>
using namespace std;

struct PhanSo {
    int Tu;
    int Mau;
};

PhanSo nhapPhanSo();

void xuatPhanSo(PhanSo ps);

int main() {
    PhanSo ps = nhapPhanSo();
    xuatPhanSo(ps);
    return 0;
}

PhanSo nhapPhanSo() {
    PhanSo ps{};
    cout << "Nhap tu so: ";
    cin >> ps.Tu;
    cout << "Nhap mau so: ";
    cin >> ps.Mau;
    return ps;
}

void xuatPhanSo(PhanSo ps) {
    cout << ps.Tu << "/" << ps.Mau;
}
