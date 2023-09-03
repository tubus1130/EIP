#include <stdio.h>
/*
    37. 함수
    - 반복적인 수행을 정의해 놓은 작은 프로그램 단위
*/

int sum(int a, int b){
    int c = a+b;
    return c;
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int func(int n);

void main() {
    int data = sum(10, 20);
    printf("%d\n", data);
    printf("=================\n");

    int k,j;
    k = 3;
    j = 2;
    swap(&k,&j);
    printf("k = %d, j = %d\n", k, j);
    printf("=================\n");

    int num;
    printf("%d\n", func(5));
}

int func(int n){
    if(n < 2){
        return n;
    }else{
        int i, tmp, current = 1, last = 0;
        for(i = 2; i <= n; i++){
            tmp = current;
            current += last;
            last = tmp;
        }
        return current;
    }
}
