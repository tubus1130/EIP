#include <stdio.h>
#include <string.h>
void main() {
    char a1[20] = "Hello";
    char b1[10] = "Soojebi";
    char c1[20] = "Hello";

    /*
        strcat(a,b) : a뒤에 b를 붙임
        strncat(a, b, len) : a뒤에 len만큼의 b를 붙임
    */
    strcat(a1,b1);
    printf("%s %s\n", a1, b1);
    strncat(c1, b1, 3);
    printf("%s %s\n", c1, b1);
    printf("===================\n");

    char a2[20] = "Hello";
    char b2[10] = "Soojebi";
    char c2[20] = "Hello";
    /*
        strcpy(a,b) : b를 a에 복사
        strncpy(a, b, len) : b의 len만큼 a로 앞에서부터 복사
    */
    strcpy(a2, b2);
    printf("%s %s\n", a2, b2);
    strncpy(c2, b2, 3);
    printf("%s %s\n", c2, b2);
    printf("===================\n");

    char a3[10] = "HelloA";
    char b3[10] = "HelloB";
    /*
        strcmp(a,b) : ASCII코드 상으로 a가 더 크면 1반환, 같으면 0, 작으면 -1
        strncpy(a, b, len) : 앞에서부터 len만큼 strcmp랑 같음
    */
    int c3 = strcmp(a3, b3);
    printf("%d\n", c3);
    c3 = strncmp(a3, b3, 3);
    printf("%d\n", c3);
    printf("===================\n");
}
