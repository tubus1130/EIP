#include <stdio.h>

void main() {
    /*
        10. 출력형식
        - %d : 10진수(정수, 문자)
        - %f : 소수점(정수, 실수)
        - %c : 문자
        - %s : 문자열
        - %x : 16진수
        - %o : 8진수

        10-1. 정수형 자리수 지정
        - %d : 그대로
        - %5d : 공간 5개만들고 오른쪽부터채움
        - %05d : 공간 5개만들고 빈곳은 0으로채움

        10-2. 실수형 자리수 지정
        - %f : 소수점은 6자리까지출력 0으로
        - %6.1f : 공간 6개만들고(소수점 1자리까지), 짤리는거 반올림
        - %-6.1f : 공간 6개 만들고 왼쪽부터 소수점1자리, 짤리는거 반올림
        - %-6.3f : 공간 6개만들고 왼쪽부터 소수점3자리, 0으로채움
    */

    printf("%d, %d\n", 10, 5);
    printf("%c\n", 65); // A
    printf("%c\n", 'A'); // A
    printf("%s\n", "정보처리기사");
    printf("%x\n", 34); // 22
    printf("%o\n", 34); // 42
    printf("===================================\n");

    printf("%d\n", 13);
    printf("%5d\n", 13);
    printf("%05d\n", 13);
    printf("===================================\n");

    printf("%f\n", 3.26);
    printf("%6.1f\n", 3.26);
    printf("%-6.1f\n", 3.26);
    printf("%-6.3f\n", 3.26);
    printf("===================================\n");

    double d_value;
    float f_value = 5.65;
    int n;
    d_value = f_value;
    d_value = d_value + 0.5;
    n = (int)d_value;
    printf("%3.1f, %d", d_value, n);
}
