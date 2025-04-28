// Bài 551: Kiểm tra điểm thuộc phần tư thứ 1 ko?
// Bài 552: Kiểm tra điểm thuộc phần tư thứ 2 ko?
// Bài 553: Kiểm tra điểm thuộc phần tư thứ 3 ko?
// Bài 554: Kiểm tra điểm thuộc phần tư thứ 4 ko?
#include <iostream>
using namespace std;

struct Diem {
    float x;
    float y;
};

Diem nhapDiem();

void xuatDiem(Diem diem);

bool thuocPhanTu1(Diem diem);

bool thuocPhanTu2(Diem diem);

bool thuocPhanTu3(Diem diem);

bool thuocPhanTu4(Diem diem);

int main() {
    Diem diem = nhapDiem();
    xuatDiem(diem);

    if (thuocPhanTu1(diem)) {
        cout << "Diem thuoc phan tu thu 1" << endl;
    } else if (thuocPhanTu2(diem)) {
        cout << "Diem thuoc phan tu thu 2" << endl;
    } else if (thuocPhanTu3(diem)) {
        cout << "Diem thuoc phan tu thu 3" << endl;
    } else if (thuocPhanTu4(diem)) {
        cout << "Diem thuoc phan tu thu 4" << endl;
    } else {
        cout << "Diem khong thuoc phan tu nao" << endl;
    }
}

Diem nhapDiem() {
    Diem diem;
    cout << "Nhap x: ";
    cin >> diem.x;
    cout << "Nhap y: ";
    cin >> diem.y;
    return diem;
}

void xuatDiem(Diem diem) {
    cout << "(" << diem.x << ", " << diem.y << ")" << endl;
}

bool thuocPhanTu1(Diem diem) {
    return diem.x > 0 && diem.y > 0;
}

bool thuocPhanTu2(Diem diem) {
    return diem.x < 0 && diem.y > 0;
}

bool thuocPhanTu3(Diem diem) {
    return diem.x < 0 && diem.y < 0;
}

bool thuocPhanTu4(Diem diem) {
    return diem.x > 0 && diem.y < 0;
}
