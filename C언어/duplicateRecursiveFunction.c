#include <stdio.h>
/*
    58. 중복재귀함수
    - 피라미드방식
*/

int recur(int a, int b){
    if(a<=1){
        return a*b;
    }else{
        return a*recur(a-1, b+1) + recur(a-1, b);
    }
}

int sub(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return(sub(n-1) + sub(n-2));
}

int cnt=0;
int fib(int n){
    cnt++;
    if(n==0) return 0;
    if(n==1) return 1;
    return (fib(n-1) + fib(n-2));
}

void main() {
    int a = 3, b = 2;
    printf("%d\n", recur(a, b));
    printf("======================\n");

    int a1=0;
    a1 = sub(4);
    printf("%d\n", a1);
    printf("======================\n");

    fib(5);
    printf("fib 호출횟수 : %d번\n", cnt); // 15
}
