#include <stdio.h>
#include <string.h>
#include <math.h>
void main() {
    /*
        strlen : 문자열의 길이 반환
    */
    char a1[20] = "Hello";
    int c1 = strlen(a1);
    printf("%d\n", c1);
    printf("======================\n");

    /*
        strrev : 문자열 뒤집기
    */
    char a2[20] = "Hello";
    strrev(a2);
    printf("%s\n", a2);
    printf("======================\n");

    /*
        strchr : 처음나온 c의 위치를 반환
    */
    char a3[20] = "Hello";
    char *p = strchr(a3, 'l');
    printf("%s\n", p);
    printf("======================\n");

    /*
        sqrt : 루트
    */
    double a4;
    a4 = sqrt(5.1);
    printf("%.2f\n", a4);
    printf("======================\n");

    /*
        ceil : 올림
    */
    double a5 = 1.1;
    printf("%.2f\n", ceil(a5));
    printf("======================\n");

    /*
        floor : 내림
    */
    double a6 = 1.1;
    printf("%.2f", floor(a6));
    printf("======================\n");

    
}
