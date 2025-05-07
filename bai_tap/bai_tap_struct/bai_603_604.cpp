// Bài 603: Tìm ngày kế đó k ngày
// Bài 604: Tìm ngày trước đó k ngày
#include <iostream>
using namespace std;

struct Date {
    int day, month, year;
};

void input(Date &d);

void output(Date d);

bool isLeapYear(int year);

int daysInMonth(Date d);

Date findNextKDate(Date d, int k);

Date findPreviousKDate(Date d, int k);

int main() {
    Date d;
    input(d);
    output(d);
    int k;
    cout << "Nhap so ngay k: ";
    cin >> k;
    Date nextKDate = findNextKDate(d, k);
    cout << "Ngay ke tiep " << k << " ngay la: ";
    output(nextKDate);
    Date previousKDate = findPreviousKDate(d, k);
    cout << "Ngay truoc " << k << " ngay la: ";
    output(previousKDate);
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

Date findNextKDate(Date d, int k) {
    Date result = d;
    for (int i = 0; i < k; i++) {
        result.day++;
        if (result.day > daysInMonth(result)) {
            result.day = 1;
            result.month++;
            if (result.month > 12) {
                result.month = 1;
                result.year++;
            }
        }
    }
    return result;
}

Date findPreviousKDate(Date d, int k) {
    Date result = d;
    for (int i = 0; i < k; i++) {
        result.day--;
        if (result.day < 1) {
            result.month--;
            if (result.month < 1) {
                result.month = 12;
                result.year--;
            }
        }
    }
    return result;
}
