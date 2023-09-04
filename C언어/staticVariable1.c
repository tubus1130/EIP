#include <stdio.h>
void test(){
    static int a = 10;
    a++;
    printf("%d\n", a);
}

void funCount(){
    int num = 0;
    static int count;
    printf("num : %d, count : %d\n", ++num, count++);
}

int fo(void){
    int var1 = 1;
    static int var2 = 1;
    return (var1++) + (var2++);
}

void main() {
    /*
        49. static 변수
        - 단 한번만 초기화 하고, 그 이후에는 전역변수처러 프로그램이 종료될때까지 메모리 공간에존재
        - 이미 만들어져있으면 수행 안함
        - 초기값이 지정 안되면, 자동으로 0대입
    */

    test();
    test();
    printf("============================\n");

    int num;
    for(num=0; num<2; num++){
        funCount();
    }
    printf("============================\n");

    int i=0, sum=0;
    while(i<3){
        sum = sum + fo();
        i++;
    }
    printf("sum = %d", sum);
}
