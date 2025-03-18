//
// Created by Admin on 2/26/2025.
// Bài 101: Viết chương trình nhập tháng, năm. Hãy cho biết tháng đó có bao nhiêu ngày
#include <iostream>
using namespace std;

bool laNamNhuan(int year) {
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        return true;
    }
    return false;
}

int getDayFromMonth(int year, int month) {
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        case 2:
            if (laNamNhuan(year)) {
                return 29;
            }
            return 28;
        default:
            cout << "Error in getDayFromMonth()" << endl;
            return 0;
    }
}

int main() {
    int month, year;
    cout << "Input month and year: ";
    cin >> month >> year;

    if (month > 12 || month < 1) {
        cout << "Invalid month!\n";
    } {
        cout << "Thang " << month << "/" << year << " co : " << getDayFromMonth(year, month) << " ngay" << endl;
    }
}
