//
// Created by Admin on 3/13/2025.
//
// ●	Bài 150: Hãy tìm giá trị âm lớn nhất trong mảng 1 chiều các số thực. Nếu mảng không có giá trị âm thì trả về  -1
#include <iostream>
using namespace std;

float timSoAmLonNhat(float a[], int n);

int main() {
    float arr[] = {-3.5, 2.1, -7.8, 4.6, -1.2, 0.0, 5.9, -9.4, 8.3, -6.7};
    int n = std::size(arr);
    cout << "So am lon nhat: " << timSoAmLonNhat(arr, n) << endl;
}

float timSoAmLonNhat(float a[], int n) {
    float maxAm = -1;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            if (!found || a[i] > maxAm) {
                maxAm = a[i];
                found = true;
            }
        }
    }
    return maxAm;
}
