// Bài 600: Tìm ngày khi biết số thứ tự ngày kể từ ngày 1/1/1
#include <iostream>
using namespace std;

struct Date {
    int day, month, year;
};

void input(Date &d);

void output(Date d);

bool isLeapYear(int year);

int daysInMonth(Date d);

Date findDate(int dayOfYear);

int main() {
    Date d;
    int dayOfYear;
    cout << "Nhap so thu tu ngay: ";
    cin >> dayOfYear;
    d = findDate(dayOfYear);
    cout << "Ngay thu " << dayOfYear << " la: ";
    output(d);
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

Date findDate(int dayOfYear) {
    Date d;
    d.year = 1;
    d.month = 1;
    d.day = 1;
    while (dayOfYear > daysInMonth(d)) {
        dayOfYear -= daysInMonth(d);
        d.month++;
        if (d.month > 12) {
            d.month = 1;
            d.year++;
        }
    }
    d.day = dayOfYear;
    return d;
}
