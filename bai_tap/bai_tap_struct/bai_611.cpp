// Bài 611: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một chuyến bay.
// Biết rằng một chuyến bay gồm những thành phần sau:
//
// Mã chuyến bay: chuỗi tối đa 5 ký tự
// Ngày bay: kiểu dữ liệu ngày
// Giờ bay: kiểu thời gian
// Nơi đi: chuỗi tối đa 20 ký tự
// Nơi đến: chuỗi tối đa 20 ký tự
// Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này
#include <iostream>
using namespace std;

struct Ngay {
    int ngay;
    int thang;
    int nam;
};

struct Gio {
    int gio;
    int phut;
};

struct ChuyenBay {
    char maChuyenBay[5];
    Ngay ngayBay;
    Gio gioBay;
    char noiDi[20];
    char noiDen[20];
};

void nhap(ChuyenBay &cb);

void xuat(ChuyenBay cb);

int main() {
    ChuyenBay cb;
    nhap(cb);
    xuat(cb);
    return 0;
}

void nhap(ChuyenBay &cb) {
    cout << "Nhap ma chuyen bay: ";
    cin.getline(cb.maChuyenBay, sizeof(cb.maChuyenBay));
    cout << "Nhap ngay bay: ";
    cin >> cb.ngayBay.ngay;
    cout << "Nhap thang bay: ";
    cin >> cb.ngayBay.thang;
    cout << "Nhap nam bay: ";
    cin >> cb.ngayBay.nam;
    cout << "Nhap gio bay: ";
    cin >> cb.gioBay.gio;
    cout << "Nhap phut bay: ";
    cin >> cb.gioBay.phut;
    cin.ignore();
    cout << "Nhap noi di: ";
    cin.getline(cb.noiDi, sizeof(cb.noiDi));
    cout << "Nhap noi den: ";
    cin.getline(cb.noiDen, sizeof(cb.noiDen));
}

void xuat(ChuyenBay cb) {
    cout << "Ma chuyen bay: " << cb.maChuyenBay << endl;
    cout << "Ngay bay: " << cb.ngayBay.ngay << "/" << cb.ngayBay.thang << "/" << cb.ngayBay.nam << endl;
    cout << "Gio bay: " << cb.gioBay.gio << ":" << cb.gioBay.phut << endl;
    cout << "Noi di: " << cb.noiDi << endl;
    cout << "Noi den: " << cb.noiDen << endl;
}
