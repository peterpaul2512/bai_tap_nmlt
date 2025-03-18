//
// Created by Admin on 2/26/2025.
// Bài 105: Viết chương trình nhập 1 số nguyên có 2 chữ số. Hãy in ra cách đọc của số nguyên này
#include <iostream>
using namespace std;

void docSo(int n) {
    int hangChuc = n / 10;
    int hangDonVi = n % 10;

    string donVi[] = {"khong", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin"};
    string chuc = "muoi";

    if (n == 10) {
        cout << chuc << endl;
    } else if (hangChuc == 1) {
        cout << chuc << " " << donVi[hangDonVi] << endl;
    } else {
        cout << donVi[hangChuc] << " " << chuc << " " << donVi[hangDonVi] << endl;
    }
}

int main() {
    int n;
    cout << "Nhap so nguyen co 2 chu so: ";
    cin >> n;

    if (n < 10 || n > 99) {
        cout << "So khong hop le !";
        return 0;
    }
    cout << "Cach doc: " << endl;
    docSo(n);
}
