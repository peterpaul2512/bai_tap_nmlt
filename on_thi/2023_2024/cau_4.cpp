// Xét 1 mảng các phân số
// a. Viết hàm lưu mảng phân số xuống tập tin
// b. Viết hàm đọc mảng phân số từ tập tin
#include <iostream>
#include <stdio.h>
using namespace std;

struct PhanSo {
    int tu;
    int mau;
};

void nhapPhanSo(PhanSo &ps);

void xuatPhanSo(PhanSo ps);

void nhapMangPhanSo(PhanSo a[], int &n);

void xuatMangPhanSo(PhanSo a[], int n);

void luuMangPhanSo(PhanSo a[], int n);

int docMangPhanSo(PhanSo a[], int maxSize);

int main() {
    const int MAX = 100;
    PhanSo ds1[MAX], ds2[MAX];
    int n1 = 0, n2 = 0;

    // Nhập và lưu
    nhapMangPhanSo(ds1, n1);
    luuMangPhanSo(ds1, n1);

    // Đọc lại và in ra
    n2 = docMangPhanSo(ds2, MAX);
    cout << "\nMang phan so doc tu file:\n";
    xuatMangPhanSo(ds2, n2);

    return 0;
}

void nhapPhanSo(PhanSo &ps) {
    cout << "Nhap tu: ";
    cin >> ps.tu;
    cout << "Nhap mau: ";
    cin >> ps.mau;
}

void xuatPhanSo(PhanSo ps) {
    cout << ps.tu << "/" << ps.mau << endl;
}

void nhapMangPhanSo(PhanSo a[], int &n) {
    cout << "Nhap so luong phan so: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan so thu " << i + 1 << ":\n";
        nhapPhanSo(a[i]);
    }
}

// Xuất mảng phân số
void xuatMangPhanSo(PhanSo a[], int n) {
    cout << "Mang phan so: " << endl;
    for (int i = 0; i < n; ++i) {
        xuatPhanSo(a[i]);
    }
    cout << endl;
}

void luuMangPhanSo(PhanSo a[], int n) {
    FILE *file = fopen("phanSo.txt", "w");
    if (file == NULL) {
        cout << "Khong the mo file de ghi.\n";
        return;
    }
    fprintf(file, "%d\n", n); // Lưu số lượng phần tử
    for (int i = 0; i < n; i++) {
        fprintf(file, "%d\n%d\n", a[i].tu, a[i].mau);
    }
    fclose(file);
    cout << "Da luu mang phan so vao file.\n";
}

int docMangPhanSo(PhanSo a[], int maxSize) {
    FILE *file = fopen("phanSo.txt", "r");
    if (file == NULL) {
        cout << "Khong the mo file de doc.\n";
        return 0;
    }
    int n;
    fscanf(file, "%d", &n); // Đọc số lượng phần tử
    if (n > maxSize) {
        n = maxSize;
    }
    for (int i = 0; i < n; i++) {
        fscanf(file, "%d", &a[i].tu);
        fscanf(file, "%d", &a[i].mau);
    }
    fclose(file);
    return n;
}