//
// Created by Admin on 2/24/2025.
//
// Bài 30: Cho số nguyên dương n. Kiểm tra xem n có phải là số hoàn thiện hay không

#include <iostream>
using namespace std;

void lietKeUocSo(int x){
    int sum = 0;
    cout << "Cac uoc so cua " << x << " la: ";
    for (int i = 1; i <= x; i++){
        if (x % i == 0 && i != x){
            cout << i << " ";
            sum += i;
        }
    }
    cout << endl;
    if (sum == x){
      cout << "La so hoan thien !" << endl;
    } else {
      cout << "Khong la so hoan thien !" << endl;
    }

}

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    lietKeUocSo(n);
    return 0;
}