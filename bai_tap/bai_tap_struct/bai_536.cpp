// Bài 536: Tính hiệu 2 số phức
#include <iostream>
using namespace std;

struct SoPhuc {
    int phanThuc;
    int phanAo;
};

SoPhuc nhapSoPhuc();

void xuatSoPhuc(SoPhuc sp);

SoPhuc tinhHieuHaiSoPhuc(SoPhuc sp1, SoPhuc sp2);

int main() {
    cout << "Nhap so phuc thu nhat: " << endl;
    SoPhuc sp1 = nhapSoPhuc();
    xuatSoPhuc(sp1);

    cout << "Nhap so phuc thu hai: " << endl;
    SoPhuc sp2 = nhapSoPhuc();
    xuatSoPhuc(sp2);
    SoPhuc tong = tinhHieuHaiSoPhuc(sp1, sp2);
    cout << "Tong hai so phuc la: ";
    xuatSoPhuc(tong);
    return 0;
}

SoPhuc nhapSoPhuc() {
    SoPhuc sp;
    cout << "Nhap phan thuc: ";
    cin >> sp.phanThuc;
    cout << "Nhap phan ao: ";
    cin >> sp.phanAo;
    return sp;
}

void xuatSoPhuc(SoPhuc sp) {
    cout << sp.phanThuc << " + " << sp.phanAo << "i" << endl;
}

SoPhuc tinhHieuHaiSoPhuc(SoPhuc sp1, SoPhuc sp2) {
    SoPhuc tong;
    tong.phanThuc = sp1.phanThuc - sp2.phanThuc;
    tong.phanAo = sp1.phanAo - sp2.phanAo;
    return tong;
}
