#include <stdio.h>

void main() {
    /*
        7. 관계연산자
        - == != > >= < <=

        7-1. 논리연산자
        - ! && ||

        7-2. 조건문
        - if, else
        - if, else if, else
        
    */
    int i = 3;
    int j = 4;
    if((++i > j--) && (i++<--j)){
        i = i-- + ++j;
    }else{
        j = i-- - --j;
    }
    printf("%d %d \n", i, j);

    printf("============================\n");

    int a = 3+5, b = 1, c;
    int ap, bp;
    ap = a++;
    bp = ++b;
    b = 3 * (ap == 8);
    c = 5 * (ap != 8);
    printf("%d %d %d %d %d \n", a, b, c, ap, bp);

    printf("============================\n");

    int x, y, num;
    y = 3+2*(x=7/2);
    num = 6 + 14 % 5 / 2 - 2 * 2;
    printf("%d %d %d\n", x, y, num);

    a = 10;
    b = 20;
    num = (a++ == 11) && (b++ == 20);
    printf("%d %d %d\n", a, b, num);
}
