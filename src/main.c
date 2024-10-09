#include <stdio.h>

int add(int num1, int num2) {
  return num1 + num2;
}

int subtrac(int num1, int num2) {
  return num1 - num2;
}

int multiplica(int num1, int num2) {
  return num1 * num2;
}

int division(int num1, int num2) {
  if(num2 == 0) {
    printf("0では割り切れません");
    return 0;
  }
  return num1 / num2;
}

int main() {
  printf("hello\n");
  return 0;
}