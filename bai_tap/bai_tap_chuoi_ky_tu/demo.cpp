#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char str1[100], str2[100], str3[100];

    cout << "Nhap chuoi 1: ";
    cin.getline(str1, 100);

    cout << "Nhap chuoi 2: ";
    cin.getline(str2, 100);

    cout << "Chuoi 1: " << str1 << endl;
    cout << "Chuoi 2: " << str2 << endl;

    // strlen - Độ dài chuỗi
    cout << "\n[1] strlen(str1) = " << strlen(str1) << endl;

    // strcpy - Sao chép chuỗi
    strcpy(str3, str1);
    cout << "[2] strcpy(str3, str1) = " << str3 << endl;

    // strdup - Cấp phát và sao chép chuỗi
    char *str4 = _strdup(str2); // dùng _strdup trên Windows
    cout << "[3] strdup(str2) = " << str4 << endl;
    free(str4); // giải phóng bộ nhớ

    // strlwr - Chuyển sang chữ thường
    strcpy(str3, str1);
    cout << "[4] strlwr(str1) = " << strlwr(str3) << endl;

    // strupr - Chuyển sang chữ hoa
    strcpy(str3, str2);
    cout << "[5] strupr(str2) = " << strupr(str3) << endl;

    // strrev - Đảo ngược chuỗi
    strcpy(str3, str1);
    cout << "[6] strrev(str1) = " << strrev(str3) << endl;

    // strcmp - So sánh chuỗi phân biệt hoa thường
    cout << "[7] strcmp(str1, str2) = " << strcmp(str1, str2) << endl;

    // stricmp - So sánh không phân biệt hoa thường
    cout << "[8] stricmp(str1, str2) = " << stricmp(str1, str2) << endl;

    // strcat - Nối chuỗi
    strcpy(str3, str1);
    strcat(str3, str2);
    cout << "[9] strcat(str1 + str2) = " << str3 << endl;

    // strstr - Tìm chuỗi con
    char *found = strstr(str1, str2);
    if (found)
        cout << "[10] strstr(str1, str2) tim thay: " << found << endl;
    else
        cout << "[10] strstr(str1, str2): Khong tim thay." << endl;

    return 0;
}