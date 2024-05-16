#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void avgFun(int *arr) {
    int sum = 0;
    int size = sizeof(arr) / sizeof(int);

    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }

    printf("평균: %.2f\n", (float) sum / size);
}

int main(void) {
    int students[5];

    for(int i = 0; i < sizeof(students) / sizeof(int); i++) {
        printf("%d번 학생 성적 입력: ", i + 1);
        scanf("%d", &students[i]);
    }

    for(int i = 0; i < sizeof(students) / sizeof(int); i++) {
        printf("%d번 학생 성적: %d\n", i + 1, students[i]);

        avgFun(students);
    }

    return 0;
}