// #include <stdio.h>
// #include <iostream>
// using namespace std;
//
// int main() {
//   int a,b,c;
//   cout << "Nhap a: ";
//   cin >> a;
//   cout << "Nhap b: ";
//   cin >> b;
//   cout << "Nhap c: ";
//   cin >> c;
//
//   int max = a;
//   if (max < b) {
//     max = b;
//   } else if (max < c) {
//     max = c;
//   }
//   cout << "Max is: "<< max << endl;
// }

#include <iostream>

int main() {
  float a, b;

  std::cout << "Nhap 2 so thuc: ";
  std::cin >> a >> b;  // Không cần "%f", nhập trực tiếp vào biến float

  if (a * b > 0)
    std::cout << a << " va " << b << " cung dau!\n";
  else
    std::cout << a << " va " << b << " trai dau!\n";

  return 0;
}
