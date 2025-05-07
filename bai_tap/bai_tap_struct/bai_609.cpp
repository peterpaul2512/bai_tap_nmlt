// Bài 609: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của 1 vé xem phim (VE). Biết rằng 1 vé xem phim gồm những thành phần sau:
//
// Tên phim: Chuỗi tối đa 20 ký tự
// Giá tiền: kiểu số nguyên 4 byte
// Xuất chiếu: kiểu thời gian (THOIGIAN)
// Ngày xem: kiểu dữ liệu ngày (NGAY)
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

struct Ve {
    char tenPhim[20];
    int giaTien;
    Gio xuatChieu;
    Ngay ngayXem;
};

void nhap(Ve &v);

void xuat(Ve v);

int main() {
    Ve v;
    nhap(v);
    xuat(v);
    return 0;
}

void nhap(Ve &v) {
    cout << "Nhap ten phim: ";
    cin.getline(v.tenPhim, sizeof(v.tenPhim));
    cout << "Nhap gia tien: ";
    cin >> v.giaTien;
    cout << "Nhap gio xuat chieu: ";
    cin >> v.xuatChieu.gio;
    cout << "Nhap phut xuat chieu: ";
    cin >> v.xuatChieu.phut;
    cout << "Nhap ngay xem: ";
    cin >> v.ngayXem.ngay;
    cout << "Nhap thang xem: ";
    cin >> v.ngayXem.thang;
    cout << "Nhap nam xem: ";
    cin >> v.ngayXem.nam;
}

void xuat(Ve v) {
    cout << "Ten phim: " << v.tenPhim << endl;
    cout << "Gia tien: " << v.giaTien << endl;
    cout << "Gio xuat chieu: " << v.xuatChieu.gio << ":" << v.xuatChieu.phut << endl;
    cout << "Ngay xem: " << v.ngayXem.ngay << "/" << v.ngayXem.thang << "/" << v.ngayXem.nam << endl;
}
