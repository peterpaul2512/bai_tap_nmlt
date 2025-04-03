// Bài 1: Xem thêm một số hàm khác như:
// atoi, atol, atof : đổi chuỗi thành số.
// itoa, ltoa, ultoa: đổi số thành chuỗi. <=> dùng std::to_string()
// strtok

#include <iostream>
#include <string.h> // strtok
#include <cstdlib>  // atoi, atol, atof, itoa, ltoa, ultoa
#include <typeinfo>
using namespace std;

int main() {
    // --- atoi, atol, atof ---
    char strNum1[] = "123";
    char strNum2[] = "1234567890";
    char strNum3[] = "3.14159";

    int num1 = atoi(strNum1);
    long num2 = atol(strNum2);
    float num3 = atof(strNum3);

    cout << "atoi: " << strNum1 << " -> " << num1 << " (Type: " << typeid(num1).name() << ")" << endl;
    cout << "atol: " << strNum2 << " -> " << num2 << " (Type: " << typeid(num2).name() << ")" << endl;
    cout << "atof: " << strNum3 << " -> " << num3 << " (Type: " << typeid(num3).name() << ")" << endl;

    // --- itoa, ltoa, ultoa ---
    int i = 456;
    long l = 987654321;
    unsigned long ul = 1234567890;

    char buffer[50];

    itoa(i, buffer, 10); // chuyển số nguyên thành chuỗi cơ số 10
    cout << "itoa: " << i << " -> " << buffer << endl;

    ltoa(l, buffer, 10); // chuyển long thành chuỗi
    cout << "ltoa: " << l << " -> " << buffer << endl;

    // ultoa(ul, buffer, 10); // chuyển unsigned long thành chuỗi
    // cout << "ultoa: " << ul << " -> " << buffer << endl;

    // --- strtok ---
    char str[] = "apple,banana,orange";
    char *token = strtok(str, ",");

    cout << "strtok: ";
    while (token != NULL) {
        cout << "[" << token << "] ";
        token = strtok(NULL, ",");
    }
    cout << endl;
    cout << "Chuoi goc : " << str << endl;

    return 0;
}
