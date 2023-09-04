#include <stdio.h>
/*
    53. 재귀함수
    - 함수 내에서 자기의 함수를 다시 호출하는 함수
    - 스택
    - 1개 : 박스 넣었다 풀기
    - 2개 : 피라미드
*/

int func(int num){
    if(num == 1){
        return 1;
    }else{
        return num * func(num-1);
    }
}

int f(int n){
    if(n>0){
        return n % 10 + f(n/10);
    }else{
        return 0;
    }
}

void main() {
    int i;
    for(i=5; i>=0; i--){
        if(i%2 == 1){
            printf("func(%d) : %d\n", i, func(i));
        }
    }
    printf("================\n");

    int result;
    result = f(123);
    printf("result : %d\n", result);
    printf("================\n");

    
}
