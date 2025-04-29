// Bài 588: Tìm 1 đỉnh trong tam giác có hoành độ lớn nhất
// Bài 589: Tìm 1 đỉnh trong tam giác có tung độ nhỏ nhất
#include <iostream>
#include <math.h>
using namespace std;

struct Diem {
    float x;
    float y;
};

struct TamGiac {
    Diem A;
    Diem B;
    Diem C;
};

Diem nhapDiem();

void xuatDiem(Diem diem);

TamGiac nhapTamGiac();

void xuatTamGiac(TamGiac tg);

float tinhKhoangCachGiuaHaiDiem(Diem A, Diem B);

bool kiemTraTamGiac(TamGiac tg);

Diem timDinhCoHoanhDoLonNhat(TamGiac tg);

Diem timDinhCoTungDoNhoNhat(TamGiac tg);

int main() {
    TamGiac tg = nhapTamGiac();
    xuatTamGiac(tg);
    if (kiemTraTamGiac(tg)) {
        cout << "3 diem A, B, C la 3 dinh cua 1 tam giac" << endl;
        Diem dinhCoHoanhDoLonNhat = timDinhCoHoanhDoLonNhat(tg);
        cout << "Dinh co hoanh do lon nhat: ";
        xuatDiem(dinhCoHoanhDoLonNhat);
        Diem dinhCoTungDoNhoNhat = timDinhCoTungDoNhoNhat(tg);
        cout << "Dinh co tung do nho nhat: ";
        xuatDiem(dinhCoTungDoNhoNhat);
    } else {
        cout << "3 diem A, B, C khong la 3 dinh cua 1 tam giac" << endl;
    }
    return 0;
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

TamGiac nhapTamGiac() {
    TamGiac tg;
    cout << "Nhap dinh A: " << endl;
    tg.A = nhapDiem();
    cout << "Nhap dinh B: " << endl;
    tg.B = nhapDiem();
    cout << "Nhap dinh C: " << endl;
    tg.C = nhapDiem();
    return tg;
}

void xuatTamGiac(TamGiac tg) {
    cout << "Tam giac: ((" << tg.A.x << ", " << tg.A.y << "); (" << tg.B.x << ", " << tg.B.y << "); (" << tg.C.x << ", "
            << tg.C.y << "))" << endl;
}

float tinhKhoangCachGiuaHaiDiem(Diem A, Diem B) {
    return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
}

bool kiemTraTamGiac(TamGiac tg) {
    float AB = tinhKhoangCachGiuaHaiDiem(tg.A, tg.B);
    float BC = tinhKhoangCachGiuaHaiDiem(tg.B, tg.C);
    float CA = tinhKhoangCachGiuaHaiDiem(tg.C, tg.A);
    if (AB + BC > CA && AB + CA > BC && BC + CA > AB) {
        return true;
    } else {
        return false;
    }
}

Diem timDinhCoHoanhDoLonNhat(TamGiac tg) {
    Diem max = tg.A;
    if (tg.B.x > max.x || (tg.B.x == max.x && tg.B.y > max.y)) {
        max = tg.B;
    }
    if (tg.C.x > max.x || (tg.C.x == max.x && tg.C.y > max.y)) {
        max = tg.C;
    }
    return max;
}

Diem timDinhCoTungDoNhoNhat(TamGiac tg) {
    Diem min = tg.A;
    if (tg.B.y < min.y || (tg.B.y == min.y && tg.B.x < min.x)) {
        min = tg.B;
    }
    if (tg.C.y < min.y || (tg.C.y == min.y && tg.C.x < min.x)) {
        min = tg.C;
    }
    return min;
}
