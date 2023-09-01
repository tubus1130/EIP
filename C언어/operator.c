#include <stdio.h>

void main() {
    /*
        5. 산술연산자
        - 이항 연산자 : + - * / %
        - 단항 연산자 : ++ --
        - 대입 연산자 : = += -= *= /= %=

        6. 연산자 우선순위
        - 괄호 > 단항 > 산술 > 시프트 > 비교 > 관계 > 비트 > 논리 > 대입
    */
    int a = 10;
    int b = a++;
    int c = ++a;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    printf("=============================\n");

    a = 3;
    b = 4;
    c = 5;
    int d = 6;
    printf("%d\n", a*b+c>=d&&d/a-b!=0);
    printf("%d\n", d%b+(++a)*c--);
    a = 3;
    b = 4;
    c = 5;
    d = 6;
    printf("%d\n", d%b+a++*c--);
}
