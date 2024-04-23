#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main (void) {
    // int i;
    // for(i = 1; i < 11; i++) {
    //     printf("* \n");
    // }

    // while(1) {
    //     printf("* \n");
    //     i++;
    //     if(i >= 11) break;
    // }

    int i, wants;
    printf("입력:");
    scanf("%d", &wants);
    for (i = 1; i < 10; i++) {
        printf("%d * %d = %d \n", wants, i, wants * i);
    }

    return 0;
}