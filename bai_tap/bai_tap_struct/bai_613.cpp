// Bài 613: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một đội bóng. (DOIBONG). Biết rằng một đội bóng gồm những thành phần sau:
//
// Mã đội bóng: chuỗi tối đa 5 ký tự
// Tên đội bóng: chuỗi tối đa 30 ký tự
// Danh sách các cầu thủ: mảng 1 chiều các cầu thủ (tối đa 30 phần tử)
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

struct DoiBong {
    char maDoiBong[5];
    char tenDoiBong[30];
    CauThu danhSachCauThu[30];
};

void nhapCauThu(CauThu &ct);

void xuatCauThu(CauThu ct);

void nhap(DoiBong &db, int soLuongCauThu);

void xuat(DoiBong db, int soLuongCauThu);

int main() {
    DoiBong db;
    int soLuongCauThu = 0;
    cout << "Nhap so luong cau thu: ";
    cin >> soLuongCauThu;
    cin.ignore(); // Để xử lý ký tự newline còn lại sau khi nhập số
    if (soLuongCauThu > 30) {
        cout << "So luong cau thu khong hop le" << endl;
        return 0;
    }
    nhap(db, soLuongCauThu);
    xuat(db, soLuongCauThu);
    return 0;
}

void nhapCauThu(CauThu &ct) {
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
    cin.ignore(); // Để xử lý ký tự newline còn lại sau khi nhập số
}

void xuatCauThu(CauThu ct) {
    cout << "Ma cau thu: " << ct.maCauThu << endl;
    cout << "Ten cau thu: " << ct.tenCauThu << endl;
    cout << "Ngay sinh: " << ct.ngaySinh.ngay << "/" << ct.ngaySinh.thang << "/" << ct.ngaySinh.nam << endl;
}

void nhap(DoiBong &db, int soLuongCauThu) {
    cout << "Nhap ma doi bong: ";
    cin.getline(db.maDoiBong, sizeof(db.maDoiBong));
    cout << "Nhap ten doi bong: ";
    cin.getline(db.tenDoiBong, sizeof(db.tenDoiBong));
    cout << "Nhap danh sach cau thu: " << endl;
    for (int i = 0; i < soLuongCauThu; i++) {
        cout << "Cau thu " << i + 1 << endl;
        nhapCauThu(db.danhSachCauThu[i]);
    }
}

void xuat(DoiBong db, int soLuongCauThu) {
    cout << "Ma doi bong: " << db.maDoiBong << endl;
    cout << "Ten doi bong: " << db.tenDoiBong << endl;
    cout << "Danh sach cau thu: " << endl;
    for (int i = 0; i < soLuongCauThu; i++) {
        cout << "Cau thu " << i + 1 << endl;
        xuatCauThu(db.danhSachCauThu[i]);
    }
}
