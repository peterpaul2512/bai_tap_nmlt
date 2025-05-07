// Bài 607: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của 1 tỉnh (TINH). Biết rằng một tỉnh gồm những thành phần sau:
//
// Mã tỉnh: Kiểu số nguyên 2 byte
// Tên tỉnh: Chuỗi tối đa 30 ký tự
// Diện tích: Kiểu số thực
// Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này
#include <iostream>
#include <string.h>
using namespace std;

struct Tinh {
    int maTinh;
    char tenTinh[30];
    float dienTich;
};

void nhap(Tinh &t) {
    cout << "Nhap ma tinh: ";
    cin >> t.maTinh;
    cin.ignore();
    cout << "Nhap ten tinh: ";
    cin.getline(t.tenTinh, sizeof(t.tenTinh));
    cout << "Nhap dien tich: ";
    cin >> t.dienTich;
}

void xuat(Tinh t) {
    cout << "Ma tinh: " << t.maTinh << endl;
    cout << "Ten tinh: " << t.tenTinh << endl;
    cout << "Dien tich: " << t.dienTich << endl;
}

int main() {
    Tinh t;
    nhap(t);
    xuat(t);
    return 0;
}
