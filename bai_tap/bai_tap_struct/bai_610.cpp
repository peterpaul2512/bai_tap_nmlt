// Bài 610: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một mặt hang (MATHANG). Biết rằng một mặt hang gồm những thành phần sau:
//
// Tên mặt hàng: chuỗi tối đa 20 ký tự
// Đơn giá: kiểu số nguyên 4 byte
// Số lượng tồn: kiểu số nguyên 4 byte
// Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này
#include <iostream>
using namespace std;

struct MatHang {
    char tenMatHang[20];
    int donGia;
    int soLuongTon;
};

void nhap(MatHang &m);

void xuat(MatHang m);

int main() {
    MatHang m;
    nhap(m);
    xuat(m);
    return 0;
}

void nhap(MatHang &m) {
    cout << "Nhap ten mat hang: ";
    cin.getline(m.tenMatHang, sizeof(m.tenMatHang));
    cout << "Nhap don gia: ";
    cin >> m.donGia;
    cout << "Nhap so luong ton: ";
    cin >> m.soLuongTon;
}

void xuat(MatHang m) {
    cout << "Ten mat hang: " << m.tenMatHang << endl;
    cout << "Don gia: " << m.donGia << endl;
    cout << "So luong ton: " << m.soLuongTon << endl;
}
