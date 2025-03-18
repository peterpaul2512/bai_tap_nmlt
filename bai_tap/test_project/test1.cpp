#include <iostream>
#include <ostream>
#include <stdio.h>
#include <windows.h>

int main() {
    // short Delta = 9;
    // printf("Kich thuoc bien Delta = %zu\n", sizeof(Delta));
    // printf("Kich thuoc kieu int = %zu\n", sizeof(int));
    // printf("Kich thuoc kieu long = %zu\n", sizeof(long));
    // printf("Kich thuoc kieu float = %zu\n", sizeof(float));
    // printf("Kich thuoc kieu double = %zu\n", sizeof(double));
    // printf("Kich thuoc kieu char = %zu\n", sizeof(char));
    // Đặt bảng mã UTF-8 cho console Windows
    // SetConsoleOutputCP(65001);
    // SetConsoleCP(65001);

    int a,b;
    std::cout << "Nhap a: ";
    std::cin >> a;  //scanf_s("%d",&a);

    std::cout << "Nhap b: ";
    std::cin >> b; //scanf_s("%d",&b);

    std::cout << "Tong cua 2 so a+b la: " << a+b;

    return 0;
}
