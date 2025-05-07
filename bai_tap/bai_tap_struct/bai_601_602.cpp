// Bài 601: Tìm ngày kế tiếp
// Bài 602: Tìm ngày hôm qua
#include <iostream>
using namespace std;

struct Date {
    int day, month, year;
};

void input(Date &d);

void output(Date d);

bool isLeapYear(int year);

int daysInMonth(Date d);

Date findNextDate(Date d);

Date findPreviousDate(Date d);

int main() {
    Date d;
    input(d);
    output(d);
    Date nextDate = findNextDate(d);
    cout << "Ngay ke tiep la: ";
    output(nextDate);
    Date previousDate = findPreviousDate(d);
    cout << "Ngay hom qua la: ";
    output(previousDate);
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

Date findNextDate(Date d) {
    Date nextDate = d;
    nextDate.day++;
    if (nextDate.day > daysInMonth(nextDate)) {
        nextDate.day = 1;
        nextDate.month++;
        if (nextDate.month > 12) {
            nextDate.month = 1;
            nextDate.year++;
        }
    }
    return nextDate;
}

Date findPreviousDate(Date d) {
    Date previousDate = d;
    previousDate.day--;
    if (previousDate.day < 1) {
        previousDate.month--;
        if (previousDate.month < 1) {
            previousDate.month = 12;
            previousDate.year--;
        }
    }
    return previousDate;
}
