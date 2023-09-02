#include <stdio.h>

void main() {
    /*
        17. do while문
        - 무조건 한번은 실행
    */
    int i = 3;
    do{
        printf("i = %d\n", i);
        i++;
    }while(i<3);
    printf("i = %d\n", i);
    printf("======================\n");

    int a,b;
    a = 2;
    while(a-- > 0){
        printf("a = %d\n", a);
    }
    for(b=0; b<2; b++){
        printf("a = %d\n", a++);
    }
    printf("======================\n");

    int x = 120, y = 45;
    while(x != y){
        if(x > y){
            x = x-y;
        }else{
            y = y-x;
        }
    }
    printf("%d\n", x);
}
