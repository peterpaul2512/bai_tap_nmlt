// Bài 598: Tính số thứ tự ngày kể từ ngày 1/1/1
#include <iostream>
using namespace std;

struct Date {
    int day, month, year;
};

void input(Date &d);

void output(Date d);

bool isLeapYear(int year);

int daysInMonth(Date d);

int soThuTuNgay(Date d);

int main() {
    Date d;
    input(d);
    output(d);
    cout << "Ngay thu " << soThuTuNgay(d) << " tu ngay 1/1/1";
    return 0;
}

void input(Date &d) {
    cout << "Nhap ngay: ";
    cin >> d.day;
    cout << "Nhap thang: ";
    cin >> d.month;
    cout << "Nhap nam: ";
    cin >> d.year;
    if (d.day < 1 || d.day > daysInMonth(d) || d.month < 1 || d.month > 12 || d.year < 1) {
        cout << "Ngay khong hop le. Vui long nhap lai.\n";
        input(d);
    }
}

void output(Date d) {
    cout << d.day << "/" << d.month << "/" << d.year << endl;
}

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int daysInMonth(Date d) {
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (d.month == 2 && isLeapYear(d.year)) {
        return 29;
    }
    return days[d.month];
}

int soThuTuNgay(Date d) {
    int sumDaysYear = 0;
    int sumDaysMonth = 0;
    for (int i = 1; i < d.year; i++) {
        sumDaysYear += isLeapYear(i) ? 366 : 365;
    }
    for (int i = 1; i < d.month; i++) {
        sumDaysMonth += daysInMonth({1, i, d.year});
    }
    return sumDaysYear + sumDaysMonth + d.day;
}
