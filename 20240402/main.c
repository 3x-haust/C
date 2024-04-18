#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // int math;
    // printf("수학 성적 입력: ");
    // scanf("%d", &math);

    // if(math <= 60){
    //     printf("불합격!");
    // }else {
    //     printf("합격!");
    // }
    // printf("판정 끝!");

    //------------------------------------------

    // int math;
    // char rank;

    // printf("수학 성적 입력: ");
    // scanf("%d", &math);

    // if(math >= 90){
    //     rank = 'A';
    // }else if(math >= 80){
    //     rank = 'B';
    // }else if(math >= 70){
    //     rank = 'C';
    // }else if(math >= 60){
    //     rank = 'D';
    // }else {
    //     rank = 'F';
    // }

    // printf("%c", rank);
    // printf("판정 끝!");

    //-----------------------------------------

    // int num;
    // printf("숫자 입력: ");
    // scanf("%d", &num);

    // if(num > 0){
    //     printf("양수!");
    // }else {
    //     if(num == 0){
    //         printf("제로!");
    //     }else {
    //         printf("음수!");
    //     }
    // }

    //-----------------------------------------

    int num;
    printf("숫자 입력: ");
    scanf("%d", &num);

    while(num < 100){
        printf(" ****** \n ");
        num = num + 1;
        //num += 1;
        //num++;
    }
    
    return 0;
}
