// Tính thứ của ngày bất kỳ trong năm(Dùng CT Zeller)
#include <iostream>
using namespace std;

int zeller(int day, int month, int year) {
    if (month == 1 || month == 2) {
        month += 12;
        year -= 1;
    }
    int K = year % 100;
    int J = year / 100;
    int f = day + 13 * (month + 1) / 5 + K + K / 4 + J / 4 + 5 * J;
    return f % 7;
}

string getDayOfWeek(int day, int month, int year) {
    int dayOfWeek = zeller(day, month, year);
    switch (dayOfWeek) {
        case 0: return "Saturday";
        case 1: return "Sunday";
        case 2: return "Monday";
        case 3: return "Tuesday";
        case 4: return "Wednesday";
        case 5: return "Thursday";
        case 6: return "Friday";
        default: return "Invalid";
    }
}

int main() {
    int day, month, year;
    cout << "Nhap ngay: ";
    cin >> day;
    cout << "Nhap thang: ";
    cin >> month;
    cout << "Nhap nam: ";
    cin >> year;

    string dayOfWeek = getDayOfWeek(day, month, year);
    cout << "Ngay " << day << "/" << month << "/" << year << " la thu " << dayOfWeek << endl;

    return 0;
}