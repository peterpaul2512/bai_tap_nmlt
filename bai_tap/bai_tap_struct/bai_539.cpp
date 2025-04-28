// Bài 539: Tính lũy thừa bậc n số phức
#include <iostream>
using namespace std;

struct SoPhuc {
    int phanThuc;
    int phanAo;
};

SoPhuc nhapSoPhuc();
void xuatSoPhuc(SoPhuc sp);
SoPhuc tinhLuyThuaBacN(SoPhuc sp1, int n);

int main() {
    cout << "Nhap so phuc: " << endl;
    SoPhuc sp = nhapSoPhuc();
    xuatSoPhuc(sp);
    int n;
    cout << "Nhap n: ";
    cin >> n;
    SoPhuc luyThua = tinhLuyThuaBacN(sp, n);
    cout << "Luy thua bac n cua so phuc la: ";
    xuatSoPhuc(luyThua);
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

SoPhuc tinhLuyThuaBacN(SoPhuc sp1, int n) {
    SoPhuc result = sp1;  // Bắt đầu với số phức ban đầu
    for (int i = 1; i < n; ++i) {
        SoPhuc temp = result;
        result.phanThuc = temp.phanThuc * sp1.phanThuc - temp.phanAo * sp1.phanAo;  // (a + bi) * (a + bi)
        result.phanAo = temp.phanThuc * sp1.phanAo + temp.phanAo * sp1.phanThuc;
    }
    return result;
}
