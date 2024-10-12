#include <stdio.h>

void userInput(int *num1, int *num2) {
    printf("最初の数字を入力してください：");
    scanf("%d", num1);

    printf("次の数字を入力してください：");
    scanf("%d", num2);
  }

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

void displayMenu() {
   printf("===== 電卓メニュー =====\n");
    printf("1. 加算\n");
    printf("2. 減算\n");
    printf("3. 乗算\n");
    printf("4. 除算\n");
    printf("5. 終了\n");
    printf("========================\n");
    printf("選択してください：");
}

void printResult(int result) {
  printf("結果: %d\n", result);
}

int main() {
  printf("hello\n");

  int num1, num2, result;

  //メニュー表示
  displayMenu();

  //ユーザー入力
  userInput(&num1, &num2)

  return 0;
}