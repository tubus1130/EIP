#include <stdio.h>

int foo(int a, int *b){
    int c;
    *b = a+1;
    c = a-1;
    return c;
}

void swap(int a, int *b){
    int temp;
    temp = a;
    a = *b;
    *b = temp;
}

void main() {
    int a = 5;
    int b = 3;
    int c = 0;
    b = foo(a, &c);
    c = foo(b, &a);
    printf("%d %d %d\n", a, b, c);
    printf("======================\n");

    int value = 3, list[4] = {1,3,5,7};
    int i;
    swap(value, &list[0]);
    swap(list[2], &list[3]);
    swap(value, &list[value]);
    for(i=0; i<4; i++){
        printf("%d ", list[i]);
    }
}
