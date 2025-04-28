// Bài 481: Hãy khai báo kiểu dữ liệu biểu diễn ngày trong thế giới thực và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này
#include <iostream>
using namespace std;

struct Ngay {
    int Ngay;
    int Thang;
    int Nam;
};

Ngay nhapNgay();

void xuatNgay(Ngay ngay);

int main() {
    Ngay ngay = nhapNgay();
    xuatNgay(ngay);
    return 0;
}

Ngay nhapNgay() {
    Ngay ngay;
    cout << "Nhap ngay: ";
    cin >> ngay.Ngay;
    cout << "Nhap thang: ";
    cin >> ngay.Thang;
    cout << "Nhap nam: ";
    cin >> ngay.Nam;
    return ngay;
}

void xuatNgay(Ngay ngay) {
    cout << ngay.Ngay << "/" << ngay.Thang << "/" << ngay.Nam;
}
