// Bài 484: Viết chương trình nhập tọa độ tâm và bán kính của 1 đường tròn trong mặt phẳng Oxy.
// Tính diện tích và chu vi của nó và xuất ra kết quả.

#include <iostream>
#include <cmath> // dùng M_PI
using namespace std;

struct Diem {
    float x;
    float y;
};

struct DuongTron {
    Diem I;
    float R;
};

// Hàm nhập tọa độ 1 điểm
Diem NhapDiem() {
    Diem diem;
    cout << "Nhap x: ";
    cin >> diem.x;
    cout << "Nhap y: ";
    cin >> diem.y;
    return diem;
}

// Hàm nhập đường tròn
DuongTron NhapDuongTron() {
    DuongTron duongtron;
    cout << "Nhap tam duong tron:\n";
    duongtron.I = NhapDiem();
    cout << "Nhap ban kinh duong tron: ";
    cin >> duongtron.R;
    return duongtron;
}

// Hàm xuất thông tin đường tròn
void XuatDuongTron(const DuongTron &duongtron) {
    cout << "Tam duong tron: (" << duongtron.I.x << ", " << duongtron.I.y << ")\n";
    cout << "Ban kinh duong tron: " << duongtron.R << endl;
}

// Hàm tính chu vi
float TinhChuVi(const DuongTron &duongtron) {
    return 2 * M_PI * duongtron.R;
}

// Hàm tính diện tích
float TinhDienTich(const DuongTron &duongtron) {
    return M_PI * duongtron.R * duongtron.R;
}

int main() {
    DuongTron duongtron = NhapDuongTron();
    XuatDuongTron(duongtron);

    cout << "Chu vi duong tron la: " << TinhChuVi(duongtron) << endl;
    cout << "Dien tich duong tron la: " << TinhDienTich(duongtron) << endl;

    return 0;
}
