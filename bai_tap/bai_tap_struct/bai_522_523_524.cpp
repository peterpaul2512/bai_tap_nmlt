// Bài 522: Khai báo dữ liệu để biểu diễn thông tin của một hỗn số
// Bài 523 Nhập hỗn số
// Bài 524 Xuất hỗn số
#include <iostream>
using namespace std;

struct HonSo {
    int soNguyen;
    int tu;
    int mau;
};

HonSo nhapHonSo();

void xuatHonSo(HonSo hs);

int main() {
    HonSo hs = nhapHonSo();
    xuatHonSo(hs);
    return 0;
}

HonSo nhapHonSo() {
    HonSo hs;
    cout << "Nhap so nguyen: ";
    cin >> hs.soNguyen;
    cout << "Nhap tu: ";
    cin >> hs.tu;
    cout << "Nhap mau: ";
    cin >> hs.mau;
    return hs;
}

void xuatHonSo(HonSo hs) {
    cout << hs.soNguyen << " " << hs.tu << "/" << hs.mau << endl;
}
