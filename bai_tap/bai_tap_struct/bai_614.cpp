// Bài 614: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một nhân viên (NHANVIEN). Biết rằng một nhân viên gồm những thành phần sau:
//
// Mã nhân viên: chuỗi tối đa 5 ký tự
// Tên nhân viên: chuỗi tối đa 30 ký tự
// Lương nhân viên: kiểu số thực
// Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này
#include <iostream>
using namespace std;

struct NhanVien {
    char maNhanVien[5];
    char tenNhanVien[30];
    float luongNhanVien;
};

void nhapNhanVien(NhanVien &nv);

void xuatNhanVien(NhanVien nv);

int main() {
    NhanVien nv;
    nhapNhanVien(nv);
    xuatNhanVien(nv);
    return 0;
}

void nhapNhanVien(NhanVien &nv) {
    cout << "Nhap ma nhan vien: ";
    cin.getline(nv.maNhanVien, sizeof(nv.maNhanVien));
    cout << "Nhap ten nhan vien: ";
    cin.getline(nv.tenNhanVien, sizeof(nv.tenNhanVien));
    cout << "Nhap luong nhan vien: ";
    cin >> nv.luongNhanVien;
}

void xuatNhanVien(NhanVien nv) {
    cout << "Ma nhan vien: " << nv.maNhanVien << endl;
    cout << "Ten nhan vien: " << nv.tenNhanVien << endl;
    cout << "Luong nhan vien: " << nv.luongNhanVien << endl;
}
