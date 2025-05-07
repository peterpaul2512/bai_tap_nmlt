// Bài 612: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một cầu thủ. Biết rằng một cầu thủ gồm những thành phần sau:
//
// Mã cầu thủ: chuỗi tối đa 10 ký tự
// Tên cầu thủ: chuỗi tối đa 30 ký tự
// Ngày sinh: kiểu dữ liệu ngày
// Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này
#include <iostream>
using namespace std;

struct Ngay {
    int ngay;
    int thang;
    int nam;
};

struct CauThu {
    char maCauThu[10];
    char tenCauThu[30];
    Ngay ngaySinh;
};

void nhap(CauThu &ct);

void xuat(CauThu ct);

int main() {
    CauThu ct;
    nhap(ct);
    xuat(ct);
    return 0;
}

void nhap(CauThu &ct) {
    cout << "Nhap ma cau thu: ";
    cin.getline(ct.maCauThu, sizeof(ct.maCauThu));
    cout << "Nhap ten cau thu: ";
    cin.getline(ct.tenCauThu, sizeof(ct.tenCauThu));
    cout << "Nhap ngay sinh: ";
    cin >> ct.ngaySinh.ngay;
    cout << "Nhap thang sinh: ";
    cin >> ct.ngaySinh.thang;
    cout << "Nhap nam sinh: ";
    cin >> ct.ngaySinh.nam;
}

void xuat(CauThu ct) {
    cout << "Ma cau thu: " << ct.maCauThu << endl;
    cout << "Ten cau thu: " << ct.tenCauThu << endl;
    cout << "Ngay sinh: " << ct.ngaySinh.ngay << "/" << ct.ngaySinh.thang << "/" << ct.ngaySinh.nam << endl;
}
