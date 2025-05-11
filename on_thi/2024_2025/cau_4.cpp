// Cho danh sách các sản phẩm. Mỗi sản phẩm có :
// - Mã sản phẩm ( chuỗi ký tự )
// - Tên sản phẩm ( chuỗi ký tự )
// - Giá sản phẩm ( số thực dương )
// a. Viết hàm lưu mảng sản phẩm xuống tập tin.
// b. Viết hàm đọc mảng sản phẩm từ tập tin.
#include <iostream>
#include <stdio.h>
using namespace std;

struct Product {
    char maSP[10];
    char tenSP[20];
    int giaSP;
};

void nhapSanPham(Product &product);

void xuatSanPham(Product product);

void nhapDanhSachSanPham(Product product[], int &n);

void xuatDanhSachSanPham(Product product[], int n);

void luuFile(Product product[], int n);

void docFile(Product product[], int &n);

int main() {
    Product product1[100], product2[100];
    int n1 = 0, n2 = 0;
    nhapDanhSachSanPham(product1, n1);
    luuFile(product1, n1);

    docFile(product2, n2);
    xuatDanhSachSanPham(product2, n2);
    return 0;
}

void nhapSanPham(Product &product) {
    cout << "Nhap ma san pham: ";
    cin >> product.maSP;
    cout << "Nhap ten san pham: ";
    cin >> product.tenSP;
    cout << "Nhap gia san pham: ";
    cin >> product.giaSP;
}

void xuatSanPham(Product product) {
    cout << product.maSP << "-" << product.tenSP << "-" << product.giaSP << endl;
}

void nhapDanhSachSanPham(Product product[], int &n) {
    cout << "Nhap so luong san pham: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Nhap san pham thu " << i + 1 << endl;
        nhapSanPham(product[i]);
    }
}

void xuatDanhSachSanPham(Product product[], int n) {
    cout << "Danh sach san pham: " << endl;
    for (int i = 0; i < n; i++) {
        xuatSanPham(product[i]);
    }
}

void luuFile(Product product[], int n) {
    FILE *file = fopen("product.txt", "w");
    fprintf(file, "%d\n", n);
    for (int i = 0; i < n; i++) {
        fprintf(file, "%s\n", product[i].maSP);
        fprintf(file, "%s\n", product[i].tenSP);
        fprintf(file, "%d\n", product[i].giaSP);
    }
    fclose(file);
    cout << "[OK] Da luu file" << endl;
}

void docFile(Product product[], int &n) {
    FILE *file = fopen("product.txt", "r");
    if (file == NULL) {
        cout << "Khong the mo file de doc" << endl;
        return;
    }
    fscanf(file, "%d\n", &n);
    for (int i = 0; i < n; i++) {
        fscanf(file, "%s\n", product[i].maSP);
        fscanf(file, "%s\n", product[i].tenSP);
        fscanf(file, "%d\n", &product[i].giaSP);
    }
    fclose(file);
}