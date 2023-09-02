#include <stdio.h>

void main() {
    /*
        24. scanf
    
    */
    int a;
    scanf("%d", &a);
    printf("%d\n", a);
    printf("=====================\n");

    int i = 10;
    int j = 20;
    int *k = &i;

    scanf("%d", k);
    printf("%d, %d, %d\n", i, j, *k); // 90 20 90
}
