//
// Created by Admin on 2/26/2025.
// Bài 94: Viết chương trình in ra tất cả các số lẻ nhỏ hơn 100 trừ các số 5, 7, 93
#include <iostream>
using namespace std;

bool isInArray(int arr[], int size, int value) {
  for (int j = 0; j < size; j++) {
    if (arr[j] == value) {
      return true;
    }
  }
  return false;
}

int main() {
  int notPrint[] = {5,7,93};
  int size = sizeof(notPrint) / sizeof(notPrint[0]); // std::size(notPrint);

  for (int i = 1; i <= 100; i++) {
    if (i % 2 != 0 && !isInArray(notPrint, size, i)) {
      cout << i << " ";
    }
  }
}
