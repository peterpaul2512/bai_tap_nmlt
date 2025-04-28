// Bài 538: Tính thương 2 số phức
#include <iostream>
using namespace std;

struct SoPhuc {
    int phanThuc;
    int phanAo;
};
SoPhuc nhapSoPhuc();
void xuatSoPhuc(SoPhuc sp);
SoPhuc tinhThuongHaiSoPhuc(SoPhuc sp1, SoPhuc sp2);
int main() {
    cout << "Nhap so phuc thu nhat: " << endl;
    SoPhuc sp1 = nhapSoPhuc();
    xuatSoPhuc(sp1);
    cout << "Nhap so phuc thu hai: " << endl;
    SoPhuc sp2 = nhapSoPhuc();
    xuatSoPhuc(sp2);
    SoPhuc thuong = tinhThuongHaiSoPhuc(sp1, sp2);
    cout << "Thuong hai so phuc la: ";
    xuatSoPhuc(thuong);
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

SoPhuc tinhThuongHaiSoPhuc(SoPhuc sp1, SoPhuc sp2) {
    SoPhuc thuong; // (ac + bd) / (c^2 + d^2) + (bc - ad) / (c^2 + d^2)i
    thuong.phanThuc = (sp1.phanThuc * sp2.phanThuc + sp1.phanAo * sp2.phanAo) / (sp2.phanThuc * sp2.phanThuc + sp2.phanAo * sp2.phanAo);
    thuong.phanAo = (sp1.phanAo * sp2.phanThuc - sp1.phanThuc * sp2.phanAo) / (sp2.phanThuc * sp2.phanThuc + sp2.phanAo * sp2.phanAo);
    return thuong;
}