// Bài 6: Tính S(n) = 1/1×2 + 1/2×3 +…+ 1/n x (n + 1)

#include <iostream>
using namespace std;
int main() {
  double sum = 0.0;
  int n;
  cout << "Please enter n : ";
  cin >> n;
  for (int i = 1; i <= n; i++) {
    sum += 1.0 / (i*(i+1));
  };
  cout << "S(n) = " << sum << endl;
}