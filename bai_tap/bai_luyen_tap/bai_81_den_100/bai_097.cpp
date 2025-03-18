//
// Created by Admin on 2/26/2025.
// Bài 97: Viết chương trình nhập 3 cạnh của 1 tam giác, cho biết đó là tam giác gì
#include <iostream>
using namespace std;

void isTriangleType(int a, int b, int c) {
    bool isValid = (a + b > c) && (b + c > a) && (a + c > b);
    bool isTamGiacDeu = (a == b && b == c);
    bool isTamGiacCan = (a == b || b == c || a == c);
    bool isTamGiacVuong = (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a);

    if (!isValid) {
        cout << "Khong phai la mot tam giac.";
        return;
    }

    if (isTamGiacVuong) {
        if (isTamGiacCan) {
            cout << "Tam giac vuong can.";
        } else {
            cout << "La tam giac vuong.";
        }
    } else if (isTamGiacDeu) {
        cout << "La tam giac deu.";
    } else if (isTamGiacCan) {
        cout << "La tam giac can.";
    } else {
        cout << "La tam giac thuong.";
    }
}

int main() {
    int a, b, c;
    cout << "Input a, b, c: ";
    cin >> a >> b >> c;

    if (a < 0 || b < 0 || c < 0) {
        cout << "Canh khong hop le." << endl;
    } else {
        isTriangleType(a, b, c);
    }
}
