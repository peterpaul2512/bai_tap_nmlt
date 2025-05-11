#include <iostream>
#include <stdio.h>
using namespace std;

void docNoiDungFile();

void ghiTapTin(int arr[], int n);

int main() {
    docNoiDungFile();
    return 0;
}

void docNoiDungFile() {
    FILE *file;
    fopen_s(&file, "mang.txt", "r");
    if (file == NULL) {
        cout << "Khong the mo file mang.txt";
        return;
    }
    FILE *desFile;
    fopen_s(&desFile, "mang2.txt", "wt");
    char s[7];
    while (fgets(s, 7, file) != NULL) {
        // bien doi thanh chu hoa
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = s[i] - 32;
            }
        }
        // ghi chuoi vao desFile
        fprintf(desFile, "%s", s);
    }
    fclose(file);
    fclose(desFile);
}
