// Viết ham tinh tong các uoc so le của só nguyen duong n
#include <iostream>
using namespace std;

void tinhTongUocSoLe(int n);

int main() {
    int n;
    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;
    if (n <= 0) {
        cout << "Vui long nhap vao so nguyen duong n lon hon 0." << endl;
        return 1;
    }
    tinhTongUocSoLe(n);
    return 0;
}

void tinhTongUocSoLe(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            if (i % 2 != 0) {
                sum += i;
            }
        }
    }
    cout << "Tong cac uoc so le cua " << n << " la: " << sum << endl;
}
