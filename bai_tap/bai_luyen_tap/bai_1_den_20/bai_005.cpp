// Bài 5: Tính S(n) = 1 + 1/3 + 1/5 + … + 1/(2n + 1)

#include <iostream>
using namespace std;

int main() {
    double sum = 0.0;
    int n;
    cout << "Nhap n : ";
    cin >> n;
    for (int i = 0; i <= n; i++) {
        sum += 1.0 / (2 * i + 1);
    }
    cout << "S(n) = " << sum << endl;
    return 0;
}