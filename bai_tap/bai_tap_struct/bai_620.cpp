// Bài 620: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một đại lý (DAILY). Biết rằng một đại lý gồm những thành phần sau:
// – Mã đại lý: chuỗi tối đa 5 ký tự
// – Tên đại lý: chuỗi tối đa 30 ký tự
// – Điện thoại: kiểu số nguyên 4 byte
// – Ngày tiếp nhận: kiểu dữ liệu ngày
// – Địa chỉ: chuỗi tối đa 50 ký tự
// – E-Mail: chuỗi tối đa 50 ký tự
//
// Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này
#include <iostream>
using namespace std;

struct Ngay {
    int ngay;
    int thang;
    int nam;
};

struct DaiLy {
    char maDaiLy[5];
    char tenDaiLy[30];
    int dienThoai;
    struct Ngay ngayTiepNhan;
    char diaChi[50];
    char email[50];
};

void nhapNgay(Ngay &ngay);

void xuatNgay(Ngay ngay);

void nhapDaiLy(DaiLy &dl);

void xuatDaiLy(DaiLy dl);

int main() {
    DaiLy dl;
    nhapDaiLy(dl);
    xuatDaiLy(dl);
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

void nhapDaiLy(DaiLy &dl) {
    cout << "Nhap ma dai ly: ";
    cin.getline(dl.maDaiLy, sizeof(dl.maDaiLy));
    cout << "Nhap ten dai ly: ";
    cin.getline(dl.tenDaiLy, sizeof(dl.tenDaiLy));
    cout << "Nhap dien thoai: ";
    cin >> dl.dienThoai;
    cout << "Nhap ngay tiep nhan: ";
    nhapNgay(dl.ngayTiepNhan);
    cin.ignore();
    cout << "Nhap dia chi: ";
    cin.getline(dl.diaChi, sizeof(dl.diaChi));
    cout << "Nhap email: ";
    cin.getline(dl.email, sizeof(dl.email));
}

void xuatDaiLy(DaiLy dl) {
    cout << "Ma dai ly: " << dl.maDaiLy << endl;
    cout << "Ten dai ly: " << dl.tenDaiLy << endl;
    cout << "Dien thoai: " << dl.dienThoai << endl;
    cout << "Ngay tiep nhan: ";
    xuatNgay(dl.ngayTiepNhan);
    cout << "Dia chi: " << dl.diaChi << endl;
    cout << "Email: " << dl.email << endl;
}
