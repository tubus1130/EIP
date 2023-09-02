#include <stdio.h>

void main() {
    /*
        15. 반복문 종류
        - for, while, do while

        15-1. for문
        - 초기식 -> 조건식 -> 작업수행 -> 증감식 -> (조건식 -> 작업수행 -> 증감식)

        16. while문
    */

    int j;
    int sum = 0;
    for(j=2; j<=70; j+=5){
        sum = sum + 1;
    }
    printf("%d\n", sum);
    printf("=========================\n");

    int i = 0;
    while(i<3){
        printf("i : %d\n", i);
        i++;
    }
    printf("i : %d\n", i);
    printf("=========================\n");

    int count = 2;
    int total = 0;
    while(count <= 10){
        total += count;
        count+=2;
    }
    printf("%d\n", total);
}
