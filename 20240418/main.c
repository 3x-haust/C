#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    printf("계산식을 입력: ex) 2 + 3\n");

    int a, b, result;
    char op;

    scanf("%d %c %d", &a, &op, &b);

    switch(op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            printf("잘못된 입력");
            return 0;

    }

    printf("결과: %d", result);

    return 0;
}
