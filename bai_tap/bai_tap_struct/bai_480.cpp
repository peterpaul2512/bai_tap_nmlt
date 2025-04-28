//Bài 480: Hãy khai báo kiểu dữ liệu để biểu diễn khái niệm đa thức 1 biến trong toán học:
//P(x) = a.n.X^n + a.n-1.X^n-1 + … + a.1.X + a.0 và định nghĩa hàm nhập và hàm xuất cho kiểu dữ liệu này
#include <iostream>
using namespace std;

struct DonThuc {
    float a; // hệ số
    int n; // số mũ
};

struct DaThuc {
    int soLuong; // số lượng đơn thức
    DonThuc *ds; // danh sách các đơn thức
};

DonThuc nhapDonThuc();

void xuatDonThuc(DonThuc donThuc);

DaThuc nhapDaThuc();

void xuatDaThuc(DaThuc dt);

int main() {
    DaThuc daThuc = nhapDaThuc();
    cout << "Da thuc vua nhap la: ";
    xuatDaThuc(daThuc);

    return 0;
}

DonThuc nhapDonThuc() {
    DonThuc donThuc;
    cout << "Nhap he so: ";
    cin >> donThuc.a;
    cout << "Nhap so mu: ";
    cin >> donThuc.n;
    return donThuc;
}

void xuatDonThuc(DonThuc donThuc) {
    if (donThuc.n == 0)
        cout << donThuc.a;
    else if (donThuc.n == 1)
        cout << donThuc.a << "x";
    else
        cout << donThuc.a << "x^" << donThuc.n;
}

DaThuc nhapDaThuc() {
    DaThuc daThuc;
    cout << "Nhap so luong don thuc: ";
    cin >> daThuc.soLuong;

    float heSo;
    cout << "Nhap he so cua don thuc: (a)";
    cin >> heSo;

    daThuc.ds = new DonThuc[daThuc.soLuong];

    for (int i = 0; i < daThuc.soLuong; i++) {
        daThuc.ds[i].a = heSo;
        daThuc.ds[i].n = i;
    }
    return daThuc;
}

void xuatDaThuc(DaThuc dt) {
    for (int i = dt.soLuong -1; i >=0 ; i--) {
        cout << i << ".";
        xuatDonThuc(dt.ds[i]);
        if (i != 0)
            cout << " + ";
    }
}
