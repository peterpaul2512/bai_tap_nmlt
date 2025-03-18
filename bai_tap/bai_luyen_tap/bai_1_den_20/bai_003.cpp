// Bài 3: Tính S(n) = 1 + ½ + 1/3 + … + 1/n

#include <iostream>
using namespace std;

int main() {
  double sum = 0.0;
  int n;
  cout << "Nhap n : ";
  cin >> n;
  for (int i = 1; i <= n; i++) {
    sum += 1.0/i;
  }
  cout << "S(n) = " << sum << endl;
  return 0;
}