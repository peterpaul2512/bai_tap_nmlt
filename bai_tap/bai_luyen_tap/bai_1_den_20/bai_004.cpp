// Bài 4: Tính S(n) = ½ + ¼ + … + 1/2n

#include <iostream>
using namespace std;

int main() {
    double sum = 0.0;
    int n;

    cout << "Nhap n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / (2 * i);
    }

    cout << "S(n) = " << sum << endl;
    return 0;
}
