// Bài 4: Viết hàm nhận vào một chuỗi s và đếm xem có bao nhiêu từ trong chuỗi đó.
#include <iostream>
#include <string.h>
using namespace std;

int countWord(const char str[]);

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    cout << "Your string is: " << str << endl;

    cout << "Word number is: " << countWord(str) << endl;
}

int countWord(const char str[]) {
    int count = 0;
    int len = strlen(str);
    bool inWord = false;

    for (int i = 0; i < len; i++) {
        if (str[i] != ' ') {
            if (!inWord) {
                count++;
                inWord = true;
            }
        } else {
            inWord = false; // Nếu gặp khoảng trắng, đánh dấu là không còn ở trong từ
        }
    }

    return count;
}
