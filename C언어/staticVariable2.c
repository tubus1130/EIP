#include <stdio.h>

int a = 10;
int b = 20;
int c = 30;

int funcA(int n){
    static int s = 1;
    s *= n;
    return s;
}

int funcB(int n){
    int s = 1;
    s *= n;
    return s;
}

void func(void){
    static int a = 100;
    int b = 200;
    a++;
    b++;
    c = a;
}

void main() {
    int s1, s2;
    s1 = funcA(2);
    printf("F1 = %d\n", s1);
    s1 = funcA(3);
    printf("F2 = %d\n", s1);
    s2 = funcB(2);
    printf("F3 = %d\n", s2);
    s2 = funcB(3);
    printf("F4 = %d\n", s2);
    printf("=====================\n");

    func();
    func();
    printf("a = %d, b = %d, c = %d\n", a, b, c); // 10 20 102
    
}
