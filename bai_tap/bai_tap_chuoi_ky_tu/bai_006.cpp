// Bài 6: Viết hàm tìm từ có chiều dài lớn nhất và xuất ra màn hình từ đó và độ dài tương ứng.
#include <iostream>
#include <string.h>
using namespace std;

void findLongestWord(const char str[]);

int main() {
    char str[100];
    cout << "Please enter a string: ";
    cin.getline(str, 100);
    cout << "Your string: " << str << endl;

    findLongestWord(str);

    return 0;
}

void findLongestWord(const char str[]) {
    int len = strlen(str);
    int maxLen = 0;
    int currentLen = 0;
    char longestWord[100];

    for (int i = 0; i <= len; i++) {  // Duyệt qua toàn bộ chuỗi, bao gồm ký tự null
        if (str[i] != ' ' && str[i] != '\0') {
            currentLen++;  // Tăng độ dài từ hiện tại
        } else {
            if (currentLen > maxLen) {
                maxLen = currentLen;
                int j = 0;
                // Lưu từ dài nhất vào mảng longestWord
                for (int k = i - currentLen; k < i; k++) {
                    longestWord[j++] = str[k];
                }
                longestWord[j] = '\0';  // Kết thúc chuỗi
            }
            currentLen = 0;  // Reset độ dài
        }
    }

    // In ra từ dài nhất và độ dài của nó
    cout << "The longest word is: " << longestWord << endl;
    cout << "Length: " << maxLen << endl;
}
