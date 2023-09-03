#include <stdio.h>

void main() {
    /*
        33. 포인터 배열
    */
    int a[2][3] = {{-3, 14, 5}, {1, -10, 8}};
    int *b[] = {a[0], a[1]};
    int *p = b[1];

    printf("%d\n", *b[1]);
    printf("%d\n", *(++p));
    printf("%d\n", *(--p-2));
    printf("========================\n");

    int *arr[3];
    int num1 = 12, num2 = 24, num3 = 36;
    arr[0] = &num1;
    arr[1] = &num2;
    arr[2] = &num3;

    printf("%d\n", *arr[1] + **arr + 1);
}
