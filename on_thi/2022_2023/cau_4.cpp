// Viết hàm tính chu vi Đa Giác
#include <iostream>
#include <math.h>
using namespace std;

struct Diem {
    int x;
    int y;
};

struct DaGiac {
    Diem d[100];
    int n;
};
void nhapDiem(Diem &d);

void nhapDaGiac(DaGiac &dg);

void xuatDaGiac(DaGiac dg);

float tinhChuVi(DaGiac dg);

float tinhKhoangCach(Diem d1, Diem d2);

int main() {
    DaGiac dg;
    nhapDaGiac(dg);
    xuatDaGiac(dg);
    cout << "Chu vi cua da giac la: " << tinhChuVi(dg);
}

void nhapDiem(Diem &d) {
	cout << "Nhap x: ";
	cin >> d.x;
	cout << "Nhap y: ";
	cin >> d.y;
};

void nhapDaGiac(DaGiac &dg) {
    cout << "Nhap so dinh cua da giac: ";
    cin >> dg.n;
    for (int i = 0; i < dg.n; i++) {
        cout << "Nhap toa do dinh thu " << i + 1 << ": " << endl;
        nhapDiem(dg.d[i]);
    }
}

void xuatDaGiac(DaGiac dg) {
    for (int i = 0; i < dg.n; i++) {
        cout << "Dinh " << i + 1 << ":(" << dg.d[i].x << ", " << dg.d[i].y << ")" << endl;
    }
}

float tinhKhoangCach(Diem d1, Diem d2) {
    return sqrt(pow(d1.x - d2.x, 2) + pow(d1.y - d2.y, 2));
}

float tinhChuVi(DaGiac dg) {
    float sum = 0;
    for (int i = 0; i < dg.n - 1; i++) {
        sum += tinhKhoangCach(dg.d[i], dg.d[i + 1]);
    }
    sum += tinhKhoangCach(dg.d[dg.n - 1], dg.d[0]);
    return sum;
}
