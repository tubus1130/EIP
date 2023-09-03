#include <stdio.h>

void main() {
    char a[2][8] = {"Hello", "Soojebi"};
    printf("%s\n", a[0]);
    printf("%s\n", &a[0][0]);
    printf("%s\n", a[1] + 3);
    printf("%s\n", &a[1][3]);
    printf("===========================\n");
    
    /*
        1. 1차원 배열과 1차원 포인터
        *(&a) = a로 상쇄
        a+i == &a[i];
        *(a+i) == a[i];
    */
    int a1[3] = {1, 2};
    int *p1 = a1;
    printf("%d %d %d\n", a1[0], a1[1], a1[2]);
    printf("%d %d %d\n", *a1, *(a1+1), *(a1+2));
    printf("%d %d %d\n", *p1, *(p1+1), *(p1+2));
    printf("%d %d %d\n", p1[0], p1[1], p1[2]);
    printf("===========================\n");

    /*
        2. 2차원 배열과 1차원 포인터
        a[i] == &a[i][0]
        a[i] + j == &a[i][j]
    */
    int a2[3][2] = {{1,2},{3,4},{5,6}};
    int *p2 = a2[1];
    printf("%d %d %d\n", *a2[0], *a2[1], *a2[2]);
    printf("%d %d %d\n", **a2, **(a2+1), **(a2+2));
    printf("%d %d\n", *p2, *(p2+1));
    printf("%d %d\n", p2[0], p2[1]);
    printf("===========================\n");

    /*
        3. 2차원 배열과 포인터 배열
        
    */
    int a3[3][2] = {{1,2},{3,4},{5,6}};
    int *p3[3] = {a3[2], a3[0], a3[1]};
    printf("%d %d %d\n", a3[0][0], a3[1][0], a3[2][0]);
    printf("%d %d %d\n", *a3[0], *a3[1], *a3[2]);
    printf("%d %d %d\n", p3[1][0], p3[2][0], p3[0][0]);
    printf("%d %d %d\n", *p3[1], *p3[2], *p3[0]);
    printf("===========================\n");

    /*
        4. 2차원 배열과 2차원 포인터
    */
    int a4[3][2] = {{1,2}, {3,4}, {5,6}};
    int (*p4)[2] = a4;
    int (*q4)[2] = a4+1;
    printf("%d %d %d\n", a4[0][0], a4[0][1], a4[1][0]);
    printf("%d %d %d\n", p4[0][0], p4[0][1], p4[1][0]);
    printf("%d %d %d\n", q4[0][0], q4[0][1], q4[1][0]);
    printf("===========================\n");

    /*
        5. 구조체와 포인터
    */
    struct Student{
        char gender;
        int age;
    };
    struct Student s = {'F', 21};
    struct Student *p5 = &s;
    printf("%c %d\n", s.gender, s.age);
    printf("%c %d\n", (&s)->gender, (&s)->age);
    printf("%c %d\n", p5->gender, p5->age);
    printf("%c %d\n", (*p5).gender, (*p5).age);
    printf("%c %d\n", p5[0].gender, p5[0].age);
    printf("===========================\n");
    
    /*
        6. 구조체 배열과 1차원 구조체 포인터
    */
    struct Teacher{
        char gender;
        int age;
    };
    struct Teacher t[3] = {'F', 21, 'M', 20, 'M', 24};
    struct Teacher *p6 = t;
    printf("%c %d\n", t[0].gender, t[0].age);
    printf("%c %d\n", (*t).gender, (*t).age);
    printf("%c %d\n", t->gender, t->age);
    printf("%c %d\n", (t+1)->gender, (t+1)->age);
    printf("%c %d\n", p6[0].gender, p6[0].age);
    printf("%c %d\n", (*p6).gender, (*p6).age);
    printf("%c %d\n", p6->gender, p6->age);
    printf("%c %d\n", (p6+1)->gender, (p6+1)->age);
}
