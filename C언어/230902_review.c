#include <stdio.h>

void main() {
    float a = 1.234;
    int b = 10;
    printf("%.2f\n", a);
    printf("%5.1f\n", a);
    printf("%05.1f\n", a);
    printf("%-05.1f\n", a);
    printf("%5d\n", b);
    printf("%05d\n", b);
    printf("%-5d\n", b);
    printf("%-05d\n", b);
    printf("=============================\n");
    
    int c;
    char d;
    scanf("%d %c\n", &c, &d);
    printf("%d %c\n", c, d);
    printf("=============================\n");

    int x = 3;
    printf("%d\n", x++);
    printf("%d\n", ++x);
    printf("%d\n", x--);
    printf("%d\n", --x);
    printf("=============================\n");

    int i, j;
    for(i=1; i<3; i++){
        for(j=1; j<3; j++){
            
        }
    }
    printf("%d\n", i);
    printf("%d\n", j);
    
}
