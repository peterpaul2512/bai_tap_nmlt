// Bài 2: Tính S(n) = 1^2 + 2^2 + … + n^2
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int sum = 0;
  int n;
  cout << "Please enter n: ";
  cin >> n;
  for (int i = 1; i <= n; i++) {
    sum += pow(i, 2);
  }
  cout << "S(n) = " << sum << endl;
}