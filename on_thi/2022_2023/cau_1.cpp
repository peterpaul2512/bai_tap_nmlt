//Viết hàm giải pt bậc 4 ax^4 + bx^2 + c = 0
#include <iostream>
#include <cmath>
using namespace std;

void giaiPhuongTrinhBac4(float a, float b, float c);

int main() {
    float a, b, c;
    cout << "Nhap he so a: ";
    cin >> a;
    cout << "Nhap he so b: ";
    cin >> b;
    cout << "Nhap he so c: ";
    cin >> c;
    cout << "Phuong trinh bac 4: " << a << "x^4 + " << b << "x^2 + " << c << " = 0" << endl;
    giaiPhuongTrinhBac4(a, b, c);
    return 0;
}

void giaiPhuongTrinhBac4(float a, float b, float c) {
    if (a == 0) {
        cout << "Phuong trinh khong phai la phuong trinh bac 4 (a phai khac 0)" << endl;
        return;
    }

    float delta = b * b - 4 * a * c;
    if (delta < 0) {
        cout << "Phuong trinh vo nghiem thuc" << endl;
        return;
    }

    if (delta == 0) {
        float xBinhPhuong = -b / (2 * a);
        if (xBinhPhuong >= 0) {
            cout << "Phuong trinh co nghiem kep:" << endl;
            cout << "x1 = x2 = " << sqrt(xBinhPhuong) << endl;
            cout << "x3 = x4 = " << -sqrt(xBinhPhuong) << endl;
        } else {
            cout << "Phuong trinh vo nghiem thuc" << endl;
        }
        return;
    }

    float xBinhPhuong1 = (-b + sqrt(delta)) / (2 * a);
    float xBinhPhuong2 = (-b - sqrt(delta)) / (2 * a);
    bool coNghiem = false;

    if (xBinhPhuong1 >= 0) {
        cout << "x1 = " << sqrt(xBinhPhuong1) << endl;
        cout << "x2 = " << -sqrt(xBinhPhuong1) << endl;
        coNghiem = true;
    }
    if (xBinhPhuong2 >= 0) {
        cout << "x3 = " << sqrt(xBinhPhuong2) << endl;
        cout << "x4 = " << -sqrt(xBinhPhuong2) << endl;
        coNghiem = true;
    }
    if (!coNghiem) {
        cout << "Phuong trinh vo nghiem thuc" << endl;
    }
}
