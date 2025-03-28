// ●	Bài 236(*): Cho 2 mảng a, b. Hãy cho biết số lần xuất hiện của mảng a trong mảng b
#include <iostream>
using namespace std;

int demSoLan(int a[], int n, int b[], int m);

int main() {
    int arrA[] = {1, 2, 3};
    int n = sizeof(arrA) / sizeof(arrA[0]);
    int arrB[] = {1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 1, 2, 5};
    int m = sizeof(arrB) / sizeof(arrB[0]);

    cout << "So lan xh cua mang A trong B la : " << demSoLan(arrA, n, arrB, m) << endl;
}

int demSoLan(int a[], int n, int b[], int m) {
    int count = 0;
    for (int i = 0; i <= m - n; i++) {
        bool match = true;
        for (int j = 0; j < n; j++) {
            if (b[i + j] != a[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            count++;
        }
    }
    return count;
}
