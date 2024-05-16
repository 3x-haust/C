#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandNum(int num) {
    srand(time(NULL));
    return rand() % num + 1;
}

int main(void) {
    int num = 0;
    int cnt = 0;
    int randomNumber = getRandNum(50);

    while (num != randomNumber) {
        printf("입력: ");
        scanf("%d", &num);

        while (getchar() != '\n');
        if (num == 0) {
            printf("숫자를 입력해주세요.\n");
            continue;
        } else if (num < 1 || num > 50) {
            printf("1 ~ 50 사이의 숫자를 입력해주세요.\n");
            continue;
        }

        cnt++;

        if (num > randomNumber) {
            printf("down!\n");
        } else if (num < randomNumber) {
            printf("up!\n");
        } else {
            printf("정답입니다!\n시도 횟수: %d\n", cnt);
        }

        num = 0;
    }

    return 0;
}