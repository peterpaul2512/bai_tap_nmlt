// Xét 1 mảng các phân số
// a. Viết hàm lưu mảng phân số xuống tập tin
// b. Viết hàm đọc mảng phân số từ tập tin
#include <iostream>
using namespace std;

struct PhanSo {
    int tu;
    int mau;
};

void nhapMangPhanSo(PhanSo a[], int &n);

void luuMangPhanSo(PhanSo a[], int n);

void docMangPhanSo(PhanSo a[], int &n);

void xuatMangPhanSo(PhanSo a[], int n);

int main() {
    PhanSo a1[100], a2[100];
    int n1 = 0, n2 = 0;
    nhapMangPhanSo(a1, n1);
    luuMangPhanSo(a1, n1);
    docMangPhanSo(a2, n2);
    xuatMangPhanSo(a2, n2);
    return 0;
};

void nhapMangPhanSo(PhanSo a[], int &n) {
    cout << "Nhap so luong pso: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Nhap pso thu " << i + 1 << endl;
        cout << "Nhap tu: ";
        cin >> a[i].tu;
        cout << "Nhap mau: ";
        cin >> a[i].mau;
    }
}

void luuMangPhanSo(PhanSo a[], int n) {
    FILE *file = fopen("mang.txt", "w");
    if (file != NULL) {
        fprintf(file, "%d\n", n);
        for (int i = 0; i < n; i++) {
            fprintf(file, "%d\n", a[i].tu);
            fprintf(file, "%d\n", a[i].mau);
        }
        fclose(file);
        cout << "Luu vao file thanh cong !" << endl;
    } else {
        cout << "Khong the mo file luu." << endl;
    }
}

void docMangPhanSo(PhanSo a[], int &n) {
    FILE *file = fopen("mang.txt", "r");
    if (file != NULL) {
        fscanf(file, "%d\n", &n);
        for (int i = 0; i < n; i++) {
            fscanf(file, "%d\n%d\n", &a[i].tu, &a[i].mau);
        }
        fclose(file);
        cout << "Doc file thanh cong !" << endl;
    } else {
        cout << "Khong the mo file de doc." << endl;
    }
}

void xuatMangPhanSo(PhanSo a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i].tu << "/" << a[i].mau << endl;
    }
}