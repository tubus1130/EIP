#include <stdio.h>

/*
    39. 함수에 주소 전달
    40. 함수와 변수의 유효범위
    - 제일 가까운 변수를 사용하면됨
*/
int f(int *i, int j){
    *i += 5;
    return(2 * *i + ++j);
}

int a = 1, b = 2, c = 3;

int func(void){
    int b, c;
    a=b=c=4;
    return(a+b+c);
}
    
void main() {
    int x = 10, y = 20;
    printf("%d\n", f(&x, y)); // 51
    printf("%d %d\n", x, y); // 15 20
    printf("=====================\n");

    printf("%3d\n", func()); //  12
    printf("%3d%3d%3d\n", a, b, c); //   4  2  3
}
