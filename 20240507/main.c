#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int userInput() {
  int num1 = 0; //가위: 1, 바위: 2, 보: 3

  printf("내가 낸 거!: ");
  scanf("%d", &num1);

  while(num1 < 1 || num1 > 3){
    printf("1~3 사이의 숫자를 입력해주세요: ");
    scanf("%d", &num1);
  }

  return num1;
}

int aiInput(){
  srand(time(NULL));

  int num2 = rand() % 3 + 1;

  printf("컴퓨터가 낸 거!: %d", num2);

  return num2;
}

int main(void) {
  int n1 = userInput();
  int n2 = aiInput();

  int result = (n1 - n2 + 3) % 3;

  printf(result  == 1 ? "\n내가 이김" : result == 2 ? "\n컴퓨터가 이김" : "\n비김");
  
  
  return 0;
}