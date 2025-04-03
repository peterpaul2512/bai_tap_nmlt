// Bài 7: Viết hàm trích ra n ký tự đầu tiên/cuối cùng/bắt đầu tại vị trí pos của chuỗi s cho trước.
#include <iostream>
#include <cstring>
using namespace std;

void extractFirstNChars(const char str[], int n);

void extractLastNChars(const char str[], int n);

void extractFromPos(const char str[], int pos, int n);

int main() {
    char str[100];
    int n, pos;

    cout << "Please enter a string: ";
    cin.getline(str, 100);
    cout << "Your string: " << str << endl;

    // Trích ra n ký tự đầu tiên
    cout << "Enter the number of characters to extract from the beginning: ";
    cin >> n;
    extractFirstNChars(str, n);

    // Trích ra n ký tự cuối cùng
    cout << "Enter the number of characters to extract from the end: ";
    cin >> n;
    extractLastNChars(str, n);

    // Trích ra n ký tự bắt đầu từ vị trí pos
    cout << "Enter the starting position and number of characters: ";
    cin >> pos >> n;
    extractFromPos(str, pos, n);

    return 0;
}

void extractFirstNChars(const char str[], int n) {
    if (n > strlen(str)) {
        cout << "The string is too short. Extracting full string: " << str << endl;
    } else {
        char firstNChars[100];
        for (int i = 0; i < n; i++) {
            firstNChars[i] = str[i];
        }
        firstNChars[n] = '\0';
        cout << "The first " << n << " characters are: " << firstNChars << endl;
    }
}

void extractLastNChars(const char str[], int n) {
    int len = strlen(str);
    if (n > len) {
        cout << "The string is too short. Extracting full string: " << str << endl;
    } else {
        char lastNChars[100];
        for (int i = 0; i < n; i++) {
            lastNChars[i] = str[len - n + i];
        }
        lastNChars[n] = '\0';
        cout << "The last " << n << " characters are: " << lastNChars << endl;
    }
}

void extractFromPos(const char str[], int pos, int n) {
    int len = strlen(str);
    if (pos >= len) {
        cout << "Position exceeds the length of the string." << endl;
    } else if (pos + n > len) {
        cout << "Extracting characters from position " << pos << " to the end of the string: ";
        cout << str + pos << endl;
    } else {
        char subStr[100];
        for (int i = 0; i < n; i++) {
            subStr[i] = str[pos + i];
        }
        subStr[n] = '\0';
        cout << "The substring from position " << pos << " with " << n << " characters is: " << subStr << endl;
    }
}
