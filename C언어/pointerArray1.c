#include <stdio.h>

void main() {
    /*
        31. 포인터배열
        - 배열의 요소가 포인터(메모리 주소)로 이루어진 것
    */
    char a[3] = {'a', 'b', 'c'};
    printf("%s\n", a);

    char *str = "Hello";
    printf("%s\n", str);

    char *student[3] = {"aaa", "bbb", "ccc"};
    printf("==========================\n");
    
    static char *c[] = {"aaa", "bbb", "ccc"};
    printf("%s\n", *(c+1));
    printf("==========================\n");

    char *array1[2] = {"Good morning", "C Language"};
    printf("%s\n", array1[0] + 5);
    printf("%c\n", *(array1[1] + 6));
    printf("==========================\n");

    
}
