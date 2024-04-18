#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a = 0;
    while(a < 100){
        printf("현재 a의 값은: %d\n", a);
    }
    printf("끝!");

    // -------------------------------------------------------------------------------------------  

    // float weight, height;
    // float result;

    // printf("키 입력: ");
    // scanf("%f", &height);
    // printf("몸무게 입력: ");
    // scanf("%f", &weight);

    // result = weight / (height / 10 * height / 10) * 100;

    // printf("너의 키는 %f cm이고, 몸무게는 %f kg \n그래서 너의 bmi지수는 %f\n", height, weight, result);
    
    // if(result < 18.5) {
    //     printf("저체중");
    // }else if(18.5 <= result && result <= 22.9) {
    //     printf("정상");
    // }else if(23.0 <= result && result < 24.9) {
    //     printf("과체중");
    // }else if(25.0 <= result) {
    //     printf("비만");
    // }

    // -------------------------------------------------------------------------------------------

    // int num;

    // printf("숫자 입력: ");
    // scanf("%d", &num);

    // if(num % 2 == 0) {
    //     printf("%d 숫자는 짝수", num);
    // }else {
    //     printf("%d 숫자는 홀수", num);
    // }
    
    
    return 0;
}