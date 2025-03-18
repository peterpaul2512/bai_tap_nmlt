// Bài 1: Tính S(n) = 1 + 2 + 3 + … + n

#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int i = 0;
    int n;
    cout << "Enter n : ";
    cin >> n;
    while (i <= n) {
        sum += i;
        i++;
    }
    cout << "Tong la: " << sum << endl;
    return 0;
}
