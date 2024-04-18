#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a = 20;
    int age = 0;
    char name = 'L';

    printf("%c님의 a 값은 %d 입니다.\n", name, a);
    printf("나이 입력: ");
    scanf("%d", &age);
    printf("입력하신 나이는 %d 입니다.\n", age);

    if(20 < age) {
        printf("성인이라 출입 가능");
    }else
    {
        printf("출입 금지");
    }
    return 0;
}

