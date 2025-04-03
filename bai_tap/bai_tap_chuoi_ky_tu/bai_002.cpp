// Bài 2: Viết hàm nhận vào một chuỗi và trả về chuỗi tương ứng (giữ nguyên chuỗi đầu vào):
/* Các ký tự thành ký tự thường (giống strlwr).
Các ký tự thành ký tự hoa (giống strupr).
Các ký tự đầu tiên mỗi từ thành ký tự hoa.
Chuẩn hóa chuỗi (xóa khoảng trắng thừa).
*/

#include <iostream>
using namespace std;
#include <string.h>

void toUpper(char str[]);

void toLower(char str[]);

void firtToUpper(char str[]);

void chuanHoaChuoi(char str[]);

int main() {
    char str[100];
    cout << "Nhap chuoi : ";
    cin.getline(str, 100);
    cout << "Chuoi vua nhap la: " << str << endl;

    // ----------------- //
    char tmp1[100], tmp2[100], tmp3[100], tmp4[100];
    strcpy(tmp1, str);
    strcpy(tmp2, str);
    strcpy(tmp3, str);
    strcpy(tmp4, str);

    toLower(tmp1);
    cout << "Chuoi viet thuong: " << tmp1 << endl;

    toUpper(tmp2);
    cout << "Chuoi viet hoa: " << tmp2 << endl;

    firtToUpper(tmp3);
    cout << "Chuoi viet hoa chu cai dau moi tu: " << tmp3 << endl;

    chuanHoaChuoi(tmp4);
    cout << "Chuoi chuan hoa: " << tmp4 << endl;

    return 0;
}

// 1. Chuyển chuỗi sang chữ thường (giống strlwr)
void toLower(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // chuyển về chữ thường
        }
    }
}

// 2. Chuyển chuỗi sang chữ hoa (giống strupr)
void toUpper(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // chuyển về chữ hoa
        }
    }
}

// 3. Viết hoa chữ cái đầu mỗi từ
void firtToUpper(char str[]) {
    int i = 0;
    bool isNewWord = true;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            isNewWord = true;
        } else {
            if (isNewWord && str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;
                isNewWord = false;
            } else if (isNewWord && str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = str[i] + 32; // phần còn lại viết thường
            } else {
                isNewWord = false;
            }
        }
        i++;
    }
}

// 4. Chuẩn hóa chuỗi: xóa khoảng trắng đầu - cuối - giữa
void chuanHoaChuoi(char str[]) {
    int i = 0, j = 0;
    int len = strlen(str);

    // Bỏ khoảng trắng đầu
    while (str[i] == ' ') i++;

    // Xử lý giữa và bỏ khoảng trắng dư
    bool spaceFound = false;
    while (i < len) {
        if (str[i] != ' ') {
            str[j++] = str[i++];
            spaceFound = false;
        } else {
            if (!spaceFound) {
                str[j++] = ' '; // Ghi 1 khoảng trắng duy nhất
                spaceFound = true;
            }
            i++;
        }
    }

    // Bỏ khoảng trắng cuối
    if (j > 0 && str[j - 1] == ' ') j--;
    str[j] = '\0';
}
