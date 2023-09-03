#include <stdio.h>

void main() {
    /*
        35. 구조체
        - 여러 변수들을 모아서, 하나의 객체를 구성할 때 사용하는 사용자 정의 타입 객체
    */

    struct person{
        char* name;
        int age;
    };
    struct person user1;
    user1.name = "dong ho";
    printf("%s\n", user1.name);
    printf("====================\n");

    struct person1{
        char* name;
        int age;
    }test;
    test.name = "kim";
    test.age = 30;
    printf("%s : %d\n", test.name, test.age);
    printf("=====================\n");

    struct person2{
        char* name;
        int age;
    };
    struct person2 *ptr;
    ptr->name = "kim2";
    ptr->age = 28;
    printf("%s : %d\n", ptr->name, ptr->age);
    printf("=====================\n");

    struct list{
        int *fp;
    } data, *p;
    int x[] = {100, 200, 300, 400};
    p = &data;
    p->fp = x+1;
    printf("%d", *(++p->fp));
}
