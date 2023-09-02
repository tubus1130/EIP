#include <stdio.h>
#define N 10
#define SQR(X) X*X

#define VALUE1 1
#define VALUE2 2

void main() {
    /*
        12. 매크로
        - 반복적인 일을 쉽게 하기 위해 만들어놓은것(전처리기에서 처리)
        - #define N 10

        12-1. 시프트연산
        - >> : 오른쪽으로 민다, /2
        - << : 왼쪽으로 민다, *2
    */
    printf("%d\n", SQR(N)); // 100
    printf("%d\n", SQR(N+2)); // 32
    // N+2*N+2 => *부터 수행
    printf("============================\n");

    printf("%d\n", 10>>2);
    printf("%d\n", 10<<2);
    printf("============================\n");

    float i;
    int j,k,m;
    i = 100/300;
    j = VALUE1 & VALUE2;
    k = VALUE1 | VALUE2;
    if(j && k || i){
        m = i+j;
    }else{
        m = j+k;
    }
    printf("%.1f, %d, %d, %03d", i, j, k, m); // 0.0, 0, 3, 003
}
