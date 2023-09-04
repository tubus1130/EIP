#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    /*
        rand() : 임의의 정수값 생성
        srand(seed) : 난수 발생
        time(NULL) : 현재시간 리턴
    */
    int a1;
    int i;
    srand(time(NULL));
    for(i=0; i<6; i++){
        a1 = rand() % 45 + 1;
        printf("%d ", a1);
    }
    printf("\n====================\n");

    /*
        atoi : 문자열을 정수형으로 변환
    */
    char *a2 = "1";
    int num2 = atoi(a2);
    printf("%d\n", num2);
    printf("====================\n");

    /*
        atof : 문자열을 실수형으로 변환
    */
    char *str_num = "1.0";
    double num3 = atof(str_num);
    printf("%.2f\n", num3);
    printf("====================\n");

    /*
        itoa(value, str, radix) : value를 변환하여 str에 radix진수로 저장
    */
    char buffer[4] = {NULL};
    int num4 = 123;
    itoa(num4, buffer, 10);
    printf("%s\n", buffer);
}
