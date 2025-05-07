// Bài 605: Khoảng cách giữa 2 ngày
// Bài 606: So sánh 2 ngày
#include <iostream>
using namespace std;

struct Date {
    int day, month, year;
};

void input(Date &d);

void output(Date d);

bool isLeapYear(int year);

int daysInMonth(Date d);

int daysBetweenDates(Date d1, Date d2);

bool isEqual(Date d1, Date d2);

bool isGreater(Date d1, Date d2);

bool isLess(Date d1, Date d2);

int main() {
    Date d1;
    cout << "Nhap date 1: " << endl;
    input(d1);
    output(d1);
    cout << "Nhap date 2: " << endl;
    Date d2;
    input(d2);
    output(d2);
    cout << "So ngay giua 2 date la: " << daysBetweenDates(d1, d2) << endl;
    if (isEqual(d1, d2)) {
        cout << "Date 1 bang date 2" << endl;
    } else if (isGreater(d1, d2)) {
        cout << "Date 1 lon hon date 2" << endl;
    } else if (isLess(d1, d2)) {
        cout << "Date 1 nho hon date 2" << endl;
    } else {
        cout << "Date 1 khong bang date 2" << endl;
    }
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

int daysBetweenDates(Date d1, Date d2) {
    int days = 0;
    while (d1.year < d2.year || d1.month < d2.month || d1.day < d2.day) {
        d1.day++;
        if (d1.day > daysInMonth(d1)) {
            d1.day = 1;
            d1.month++;
            if (d1.month > 12) {
                d1.month = 1;
                d1.year++;
            }
        }
        days++;
    }
    return days;
}

bool isEqual(Date d1, Date d2) {
    return d1.year == d2.year && d1.month == d2.month && d1.day == d2.day;
}

bool isGreater(Date d1, Date d2) {
    return d1.year > d2.year || d1.month > d2.month || d1.day > d2.day;
}

bool isLess(Date d1, Date d2) {
    return d1.year < d2.year || d1.month < d2.month || d1.day < d2.day;
}
