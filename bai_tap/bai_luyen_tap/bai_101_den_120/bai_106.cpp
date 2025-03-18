//
// Created by Admin on 2/26/2025.
// Bài 106 Viết chương trình nhập 1 số nguyên có 3 chữ số. Hãy in ra cách đọc của số nguyên này
#include <iostream>
using namespace std;

void docSo(int n) {
    int hangTram = n / 100;
    int hangChuc = (n % 100) / 10;
    int hangDonVi = n % 10;

    string donVi[] = {"khong", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin"};
    string chuc = "muoi";
    string tram = "tram";
    string le = "le";

    cout << donVi[hangTram] << " " << tram;

    if (hangChuc == 0 && hangDonVi == 0) {
        return;
    }
    if (hangChuc == 0) {
        cout << " " << le << " " << donVi[hangDonVi];
    } else if (hangChuc == 1) {
        cout << " " << chuc;
        if (hangDonVi != 0) {
            cout << " " << donVi[hangDonVi];
        }
    } else {
        cout << " " << donVi[hangChuc] << " " << chuc;
        if (hangDonVi == 0) {
            return;
        }
        cout << " " << donVi[hangDonVi];
    }
}

int main() {
    int n;
    cout << "Nhap so nguyen co 3 chu so: ";
    cin >> n;

    if (n < 100 || n > 999) {
        cout << "So khong hop le !";
        return 0;
    }
    cout << "Cach doc: " << endl;
    docSo(n);
    return 0;
}
