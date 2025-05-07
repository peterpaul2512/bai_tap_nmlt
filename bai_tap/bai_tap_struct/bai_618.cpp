// Bài 618: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một lớp học (LOPHOC). Biết rằng một lớp học gồm những thành phần sau:
//
// Tên lớp: chuỗi tối đa 30 ký tự
// Sĩ số: kiểu số nguyên 2 byte
// Danh sách các học sinh trong lớp ( tối đa 50 học sinh)
// Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này
#include <iostream>
using namespace std;

struct HocSinh {
    char tenHocSinh[30];
};

struct LopHoc {
    char tenLop[30];
    int siSo;
    struct HocSinh danhSachHocSinh[50];
};

void nhapHocSinh(HocSinh &hs);

void xuatHocSinh(HocSinh hs);

void nhapLopHoc(LopHoc &lh);

void xuatLopHoc(LopHoc lh);

int main() {
    LopHoc lh;
    nhapLopHoc(lh);
    xuatLopHoc(lh);
    return 0;
}

void nhapHocSinh(HocSinh &hs) {
    cout << "Nhap ten hoc sinh: ";
    cin.getline(hs.tenHocSinh, sizeof(hs.tenHocSinh));
}

void xuatHocSinh(HocSinh hs) {
    cout << "Ten hoc sinh: " << hs.tenHocSinh << endl;
}

void nhapLopHoc(LopHoc &lh) {
    cout << "Nhap ten lop: ";
    cin.getline(lh.tenLop, sizeof(lh.tenLop));
    cout << "Nhap si so: ";
    cin >> lh.siSo;
    for (int i = 0; i < lh.siSo; i++) {
        cout << "Nhap thong tin hoc sinh thu " << i + 1 << endl;
        nhapHocSinh(lh.danhSachHocSinh[i]);
    }
}

void xuatLopHoc(LopHoc lh) {
    cout << "Ten lop: " << lh.tenLop << endl;
    cout << "Si so: " << lh.siSo << endl;
    for (int i = 0; i < lh.siSo; i++) {
        cout << "Thong tin hoc sinh thu " << i + 1 << endl;
        xuatHocSinh(lh.danhSachHocSinh[i]);
    }
}
