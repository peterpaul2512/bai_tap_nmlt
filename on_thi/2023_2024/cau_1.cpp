// Viết ham tinh tong các uoc so le của só nguyen duong n
#include <iostream>
using namespace std;

void tinhTongUocSoLe(int n);

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    if (n <= 0) {
        cout << "Invalid input !" << endl;
        return 0;
    }
    tinhTongUocSoLe(n);
    return 0;
}

void tinhTongUocSoLe(int n) {
    int sum = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0 && i % 2 != 0) {
            sum += i;
        }
    }
    cout << "Tong cac uoc so le la : " << sum << endl;
}
