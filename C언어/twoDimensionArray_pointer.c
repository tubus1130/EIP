#include <stdio.h>

void main() {
    /*
        29. 2차원 배열과 포인터
        a[3][2]를 a[0], a[1], a[2]로 나누어서 주소배정(행 기준)
    */

    int a[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    printf("%d\n", a); // 100
    printf("%d\n", *a); // 100
    printf("%d\n", **a); // 1
    printf("=========================\n");
    
    int data[][3] = {1,3,4,5,2,9,6,8,7};
    int* p = data[1];
    int x, y;
    x = *p;
    y = *(p+2);
    printf("x = %d, y = %d\n", x, y);
    printf("=========================\n");

    int darr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int sum1, sum2;
    sum1 = *(*darr+1) + *(*darr+2);
    sum2 = *darr[1] + *darr[2];
    printf("%d, %d\n", sum1, sum2);
}
