#include <stdio.h>

int *func(int a, int *x){
    a = a + 10;
    x = x + 1;
    *x = *x * 2;
    return x;
}

void change(int *px, int *py, int pc, int pd){
    *px = *py + pd;
    *py = pc + pd;
    pc = *px + pd;
    pd = *px + *py;
}

void main() {
    int i;
    int x = 10;
    int *p;
    int arr[100];
    for(i=0; i<100; i++){
        arr[i] = i * 10;
    }
    p = func(x, arr);
    printf("sum = %d\n", x + arr[0] + arr[1] + p[0] + p[1]);
    printf("==========================\n");

    int a = 10, b = 20, c = 30, d = 40;
    change(&a, &b, c, d);
    printf("%d, %d, %d, %d\n", a, b, c, d);
}
