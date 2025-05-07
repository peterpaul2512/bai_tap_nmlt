// Bài 608: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một hộp sữa (HOPSUA). Biết rằng một hộp sữa gồm các thành phần sau:
//
// Nhãn hiệu: chuỗi tối đa 20 ký tự
// Trọng lượng: kiểu số thực
// Hạn sử dụng: Kiểu dữ liệu Ngày (NGAY)
// Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này
#include <iostream>
using namespace std;

struct Ngay {
    int ngay;
    int thang;
    int nam;
};

struct HopSua {
    char nhanHieu[20];
    float trongLuong;
    Ngay hanSuDung;
};

void nhap(HopSua &hs);

void xuat(HopSua hs);

int main() {
    HopSua hs;
    nhap(hs);
    xuat(hs);
    return 0;
}

void nhap(HopSua &hs) {
    cout << "Nhap nhan hieu: ";
    cin.getline(hs.nhanHieu, sizeof(hs.nhanHieu));
    cout << "Nhap trong luong: ";
    cin >> hs.trongLuong;
    cout << "Nhap han su dung: ";
    cin >> hs.hanSuDung.ngay >> hs.hanSuDung.thang >> hs.hanSuDung.nam;
}

void xuat(HopSua hs) {
    cout << "Nhan hieu: " << hs.nhanHieu << endl;
    cout << "Trong luong: " << hs.trongLuong << endl;
    cout << "Han su dung: " << hs.hanSuDung.ngay << "/" << hs.hanSuDung.thang << "/" << hs.hanSuDung.nam << endl;
}
