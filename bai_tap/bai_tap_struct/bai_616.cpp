// Bài 616: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một luận văn (LUANVAN). Biết rằng một luận văn gồm những thành phần sau:
//
// Mã luận văn: chuỗi tối đa 10 ký tự
// Tên luận văn: chuỗi tối đa 100 ký tự
// Họ tên sinh viên thực hiện: chuỗi tối đa 30 ký tự
// Họ tên giảng viên hướng dẫn: chuỗi tối đa 30 ký tự
// Năm thực hiện: kiểu số nguyên 2 byte
// Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này
#include <iostream>
using namespace std;

struct LuanVan {
    char maLuanVan[10];
    char tenLuanVan[100];
    char hoTenSinhVien[30];
    char hoTenGiangVien[30];
    int namThucHien;
};

void nhapLuanVan(LuanVan &lv);

void xuatLuanVan(LuanVan lv);

int main() {
    LuanVan lv;
    nhapLuanVan(lv);
    xuatLuanVan(lv);
    return 0;
}

void nhapLuanVan(LuanVan &lv) {
    cout << "Nhap ma luan van: ";
    cin.getline(lv.maLuanVan, sizeof(lv.maLuanVan));
    cout << "Nhap ten luan van: ";
    cin.getline(lv.tenLuanVan, sizeof(lv.tenLuanVan));
    cout << "Nhap ho ten sinh vien: ";
    cin.getline(lv.hoTenSinhVien, sizeof(lv.hoTenSinhVien));
    cout << "Nhap ho ten giang vien: ";
    cin.getline(lv.hoTenGiangVien, sizeof(lv.hoTenGiangVien));
    cout << "Nhap nam thuc hien: ";
    cin >> lv.namThucHien;
}

void xuatLuanVan(LuanVan lv) {
    cout << "Ma luan van: " << lv.maLuanVan << endl;
    cout << "Ten luan van: " << lv.tenLuanVan << endl;
    cout << "Ho ten sinh vien: " << lv.hoTenSinhVien << endl;
    cout << "Ho ten giang vien: " << lv.hoTenGiangVien << endl;
    cout << "Nam thuc hien: " << lv.namThucHien << endl;
}
