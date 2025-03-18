//
// Created by Admin on 2/26/2025.
// Bài 110: Cần có tổng 200.000 đồng từ 3 loại giấy bạc 1000 đồng, 2000 đồng, 5000 đồng.
//Lập chương trình để tìm ra tất cả các phương án có thể
#include <iostream>
using namespace std;

int main() {
    int totalValue = 200000;
    int count = 0;

    for (int i = 0; i <= totalValue / 5000; i++) {
        for (int j = 0; j <= (totalValue - i * 5000) / 2000; j++) {
            int remain = totalValue - (i * 5000) - j * 2000;
            int k = remain / 1000;

            if (remain % 1000 == 0 && remain >= 0) {
                cout << "Phuong an " << ++count << ": " << k << " to 1000 - " << j << " to 2000 - " << i << " to 5000"
                        << endl;
            }
        }
    }
    if (count == 0) {
        cout << "Khong co phuong an nao!" << endl;
    } else {
        cout << "Tong cong: " << count << " phuong an." << endl;
    }

    return 0;
}
