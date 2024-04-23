// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>

// int main(){
//     printf("계산식을 입력: ex) 2 + 3\n");

//     int a, b, result;
//     char op;

//     scanf("%d %c %d", &a, &op, &b);

//     switch(op) {
//         case '+':
//             result = a + b;
//             break;
//         case '-':
//             result = a - b;
//         case '*':
//             result = a * b;
//             break;
//         case '/':
//             result = a / b;
//             break;
//         default:
//             printf("잘못된 입력");
//             return 0;

//     }

//     printf("결과: %d", result);

//     return 0;
// }


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char name  = 'g';
int result = 0;

void add(int a, int b) {
    result = a + b;
}

void sub(int a, int b) {
    result = a - b;
}

void mul(int a, int b) {
    result = a * b;
}

void div(int a, int b) {
    result = a / b;
}

int main(void) {

    int num1, num2, result;
    char op;

    printf("계산식을 입력: ex) 2 + 3\n");

    scanf("%d %c %d", &num1, &op, &num2);

    switch(op){
        case '+':
            add(num1, num2);
            break;
        case '-':
            sub(num1, num2);
            break;
        case '*':
            mul(num1, num2);
            break;
        case '/':
            div(num1, num2);
            break;
    }

    printf("결과값은 : %d", result);

    return 0;
}