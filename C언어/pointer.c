#include <stdio.h>

void main() {
    /*
        23. 포인터
        - 메모리의 위치를 표현한 기호
    */

    int *a; // a는 포인터변수야!
    *a = 10; // a가 가리키는 값에다가 10을 대입해!
    /*
        a는 102번지 주소 102을 저장
        102번지 주소는 10을 저장
    */
    printf("%d\n", a); // 100
    printf("%d\n", *a); // 10

    int b = 10;
    int *a;
    a = &b; // a는 b의 주소를 대
    printf("%d\n", *a); // 10
    printf("%d\n", b); // 10

    int A = 10, B;
    int *C = &B;

    B = A--;
    B += 20;
    printf("%d", *C); // 30
}
