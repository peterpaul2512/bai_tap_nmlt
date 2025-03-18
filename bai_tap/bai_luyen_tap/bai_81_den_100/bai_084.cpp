//
// Created by Admin on 2/26/2025.
// Bài 84: Viết chương trình giải và biện luận phương trình bậc nhất ax + b = 0
#include <iostream>
using namespace std;

void giaiPhuongTrinhBac1(float a, float b) {
    if (a == 0) {
        if (b == 0) {
            cout << "Phuong trinh co vo so nghiem" << endl;
        } else {
            cout << "Phuong trinh vo nghiem" << endl;
        }
    } else {
        double x = -b / a;
        cout << "Phuong trinh co nghiem duy nhat: x = " << x << endl;
    }
}

int main() {
    float a, b;
    cout << "Nhap a, b: ";
    cin >> a >> b;

    if (a == 0) {
        cout << "Phuong trinh khong hop le ( a must != 0 )" << endl;
    } else {
        giaiPhuongTrinhBac1(a, b);
    }
    return 0;
}
