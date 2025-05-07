// Bài 619: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một sổ tiết kiệm (SOTIETKIEM). Biết rằng một sổ tiết kiệm gồm những thành phần sau:
//
// Mã sổ: chuỗi tối đa 5 ký tự
// Loại tiết kiệm: chuỗi tối đa 10 ký tự
// Họ tên khách hàng: chuỗi tối đa 30 ký tự
// Chứng minh nhân dân: kiểu số nguyên 4 byte
// Ngày mở sổ: kiểu dữ liệu ngày
// Số tiền gửi: kiểu số thực
// Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này
#include <iostream>
using namespace std;

struct Ngay {
    int ngay;
    int thang;
    int nam;
};

struct SoTietKiem {
    char maSo[5];
    char loaiTietKiem[10];
    char hoTenKhachHang[30];
    int chungMinhNhanDan;
    struct Ngay ngayMoSo;
    float soTienGui;
};

void nhapNgay(Ngay &ngay);

void xuatNgay(Ngay ngay);

void nhapSoTietKiem(SoTietKiem &stk);

void xuatSoTietKiem(SoTietKiem stk);

int main() {
    SoTietKiem stk;
    nhapSoTietKiem(stk);
    xuatSoTietKiem(stk);
    return 0;
}

void nhapNgay(Ngay &ngay) {
    cout << "Nhap ngay: ";
    cin >> ngay.ngay;
    cout << "Nhap thang: ";
    cin >> ngay.thang;
    cout << "Nhap nam: ";
    cin >> ngay.nam;
}

void xuatNgay(Ngay ngay) {
    cout << ngay.ngay << "/" << ngay.thang << "/" << ngay.nam << endl;
}

void nhapSoTietKiem(SoTietKiem &stk) {
    cout << "Nhap ma so: ";
    cin.getline(stk.maSo, sizeof(stk.maSo));
    cout << "Nhap loai tiet kiem: ";
    cin.getline(stk.loaiTietKiem, sizeof(stk.loaiTietKiem));
    cout << "Nhap ho ten khach hang: ";
    cin.getline(stk.hoTenKhachHang, sizeof(stk.hoTenKhachHang));
    cout << "Nhap chung minh nhan dan: ";
    cin >> stk.chungMinhNhanDan;
    cout << "Nhap ngay mo so: " << endl;
    nhapNgay(stk.ngayMoSo);
    cout << "Nhap so tien gui: ";
    cin >> stk.soTienGui;
}

void xuatSoTietKiem(SoTietKiem stk) {
    cout << "Ma so: " << stk.maSo << endl;
    cout << "Loai tiet kiem: " << stk.loaiTietKiem << endl;
    cout << "Ho ten khach hang: " << stk.hoTenKhachHang << endl;
    cout << "Chung minh nhan dan: " << stk.chungMinhNhanDan << endl;
    cout << "Ngay mo so: ";
    xuatNgay(stk.ngayMoSo);
    cout << "So tien gui: " << stk.soTienGui << endl;
}
