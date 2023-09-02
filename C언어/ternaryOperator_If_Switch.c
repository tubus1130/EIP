#include <stdio.h>

void main() {
    /*
        13. 삼항연산자(조건연산자)
        - 조건 ? 참 : 거짓;

        14. IF문

        14-1. SWITCH문
        - break
    */

    int num = 10 > 5 ? 10 : 5;
    printf("%d\n", num);
    printf("======================\n");

    int a,b;
    a = 20;
    b = (a>10) ? a+a : a*a;
    printf("%d\n", b);
    printf("======================\n");

    int x = 0, y = 1;
    switch(x){
        case 0:
        printf("%d\n", y++);
        break;
        case 1:
        printf("%d\n", ++y);
        break;
        default:
        printf("%d\n", y);
        break;
    }
}
