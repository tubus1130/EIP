#include <stdio.h>

double h(double *f, int d, double x){
    int i;
    double res = 0.0;
    for(i=d-1; i>=0; i--){
        res = res * x + f[i];
    }
    return res;
}

void func(int *a, int b, int *c){
    int x;
    x = *a;
    *a = x++;
    x = b;
    b = ++x;
    --(*c);
}

void main() {
    double f[] = {1,2,3,4};
    printf("%3.1f\n", h(f,4,2)); // 49.0
    printf("======================\n");

    int a, b, c[1];
    a = 20;
    b = 20;
    c[0] = 20;
    func(&a, b, c);
    printf("%d, %d, %d\n", a, b, c[0]);
}
