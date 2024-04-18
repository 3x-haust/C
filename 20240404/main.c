#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool isInteger(const char* input) {
    int length, i;
    length = strlen(input);
    for(i = 0; i < length; i++) {
        if((input[i] < '0' || input[i] > '9') && input[i] != '-') {
            return false;
        }
    }
    return true;
}

int main(void) {
    char name[][20] = { "짜장면", "라면", "라볶이"};
    char input[100];
    int menu;
    int result;

    while(1){
        printf("메뉴 선택하세요 (1: 짜장면, 2: 라면, 3: 라볶이, 0: 종료): ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0;

        if(!isInteger(input)) {
            printf("없는 메뉴입니다\n");
            continue;
        }

        menu = atoi(input);

        if(menu < 0 || menu > 3) {
            printf("없는 메뉴입니다\n");
            continue;
        }

        switch(menu) {
            case 1:
            case 2:
            case 3:
                printf("%s, 냠냠!\n", name[menu - 1]);
                break;
            case 0:
                printf("종료\n");
                return 0;
            default:
                printf("없는 메뉴입니다\n");
                break;
        }
    }
}
