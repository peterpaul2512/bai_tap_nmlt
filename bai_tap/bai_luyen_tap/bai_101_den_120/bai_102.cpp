//
// Created by Admin on 2/26/2025.
// Bài 102: Viết chương trình nhập vào 1 ngày (ngày, tháng, năm). Tìm ngày kế ngày vừa nhập (ngày, tháng, năm)
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

void ngayKeTiep(int &day, int &month, int &year) {
    // dùng & truyền tham chiếu
    int maxDays = getDayFromMonth(year, month);
    day++;
    if (day > maxDays) {
        day = 1;
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }
}

int main() {
    int day, month, year;
    cout << "Input day, month and year: ";
    cin >> day >> month >> year;

    if (month < 1 || month > 12 || day < 1 || year < 1) {
        cout << "Invalid input!\n";
        return 0;
    }
    int maxDays = getDayFromMonth(year, month);
    if (day > maxDays) {
        cout << "Ngay khong hop le voi thang va nam da nhap!" << endl;
        return 0;
    }

    ngayKeTiep(day, month, year);
    cout << "Ngay ke tiep la: " << day << "-" << month << "-" << year << endl;
    return 0;
}
