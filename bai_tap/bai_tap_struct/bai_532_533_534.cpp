// Bài 532: Khai báo biểu diễn thông tin số phức
// Bài 533: Nhập số phức
// Bài 534: Xuất số phức
#include <iostream>
using namespace std;

struct SoPhuc {
    int phanThuc;
    int phanAo;
};

SoPhuc nhapSoPhuc();

void xuatSoPhuc(SoPhuc sp);

int main() {
    SoPhuc sp = nhapSoPhuc();
    xuatSoPhuc(sp);
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
