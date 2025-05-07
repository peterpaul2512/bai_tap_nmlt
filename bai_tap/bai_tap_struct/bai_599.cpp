// Bài 599: Tìm ngày khi biết năm và số thứ tự của ngày trong năm
#include <iostream>
using namespace std;

struct Date {
    int day, month, year;
};

void input(Date &d);

void output(Date d);

bool isLeapYear(int year);

int daysInMonth(Date d);

Date findDate(int year, int dayOfYear);

int main() {
    int year, dayOfYear;
    cout << "Nhap nam: ";
    cin >> year;
    cout << "Nhap so thu tu cua ngay trong nam: ";
    cin >> dayOfYear;
    Date result = findDate(year, dayOfYear);
    cout << "Ngay thu " << dayOfYear << " trong nam " << year << " la: ";
    output(result);
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
Date findDate(int year, int dayOfYear) {
    Date d;
    d.year = year;
    d.month = 1;
    d.day = 1;
    while (dayOfYear > daysInMonth(d)) {
        dayOfYear -= daysInMonth(d);
        d.month++;
    }
    d.day = dayOfYear;
    return d;
}