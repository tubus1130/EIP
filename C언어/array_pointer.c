#include <stdio.h>

void main() {
    /*
        25. 배열은 0번지의 주소값을 가지고있다.
    */
    int i;
    int a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int* ptr = a+3;
    for(i=0; i<5; i++){
        printf("%d ", *(ptr+i)-3);
    }
    printf("\n====================\n");

    int b[5];
    int* c = b;
    b[2] = 10;
    c[2] = 20;
    printf("%d\n", b[2]);
    printf("====================\n");

    int arr[] = {1, 2, 4, 8};
    int* p = arr+1;
    p[1] = 3;
    arr[1] = 4;
    p[2] = 5;
    printf("%d %d\n", arr[1]+p[1], arr[2]+p[2]);
    printf("====================\n");

    int a2[4] = {10, 20, 30};
    int *p2 = a2;
    p2++;
    *p2++ = 100;
    *++p2 = 200;
    printf("a[0]=%d, a[1]=%d, a[2]=%d\n", a[0], a[1], a[2]);
    printf("====================\n");

    int num[4] = {1,2,3,4};
    int* pt = num;
    pt++;
    *pt++ = 5;
    *pt++ = 10;
    pt--;
    *pt++ += 20;
    printf("%d %d %d %d", num[0], num[1], num[2], num[3]);
    
}
