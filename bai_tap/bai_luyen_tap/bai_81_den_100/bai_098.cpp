//
// Created by Admin on 2/26/2025.
// Bài 98: Lập chương trình giải hệ:
// ax + by = c
// dx + ey = f. Các hệ số nhập từ bàn phím
#include <iostream>
using namespace std;

int main() {
    float a, b, c, d, e, f;
    cout << "Input a,b,c,d,e,f: ";
    cin >> a >> b >> c >> d >> e >> f;

    float D = a * e - b * d; // Định thức chính
    float Dx = c * e - b * f; // Định thức phụ cho x
    float Dy = a * f - c * d; // Định thức phụ cho y

    if (D != 0.0) {
        float x = Dx / D;
        float y = Dy / D;
        cout << "He phuong trinh co nghiem duy nhat: " << endl;
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    } else {
        if (Dx == 0 && Dy == 0) {
            cout << "He phuong trinh co vo so nghiem." << endl;
        } else {
            cout << "He phuong trinh vo nghiem." << endl;
        }
    }
    return 0;
}
