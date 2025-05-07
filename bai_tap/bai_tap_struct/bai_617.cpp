// Bài 617: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một học sinh (HOCSINH). Biết rằng một lớp học gồm những thành phần sau:
//
// Tên học sinh: chuỗi tối đa 30 ký tự
// Điểm toán: kiểu số nguyên 2 byte
// Điểm văn: kiểu số nguyên 2 byte
// Điểm trung bình: kiểu số thực
// Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này
#include <iostream>
using namespace std;

struct HocSinh {
    char tenHocSinh[30];
    int diemToan;
    int diemVan;
    float diemTrungBinh;
};

void nhapHocSinh(HocSinh &hs);

void xuatHocSinh(HocSinh hs);

int main() {
    HocSinh hs;
    nhapHocSinh(hs);
    xuatHocSinh(hs);
    return 0;
}

void nhapHocSinh(HocSinh &hs) {
    cout << "Nhap ten hoc sinh: ";
    cin.getline(hs.tenHocSinh, sizeof(hs.tenHocSinh));
    cout << "Nhap diem toan: ";
    cin >> hs.diemToan;
    cout << "Nhap diem van: ";
    cin >> hs.diemVan;
    hs.diemTrungBinh = (hs.diemToan + hs.diemVan) / 2.0;
}

void xuatHocSinh(HocSinh hs) {
    cout << "Ten hoc sinh: " << hs.tenHocSinh << endl;
    cout << "Diem toan: " << hs.diemToan << endl;
    cout << "Diem van: " << hs.diemVan << endl;
    cout << "Diem trung binh: " << hs.diemTrungBinh << endl;
}
