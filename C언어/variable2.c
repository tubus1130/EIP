#include <stdio.h>

int num1;
void func();
int add(int i);

void main() {
    /*
        4. 변수
        - 지역변수 : 초기값이 없으면 쓰레기값 들어감, 스택영역에 저장
        - 전역변수 : 초기값이 없으면 0값이 들어감, 데이터영역에 저장
        - 정적변수 : static, 한번만 초기화 -> 그 이후에는 그 코드 무시, 데이터영역에 저장
        - 동적변수 : 무조건 포인터, 힙영역 저장
    */
    num1 = 10;
    printf("%d \n", num1);
    func();
    printf("%d \n", num1);

    printf("============================\n");

    add(10);
    add(5);
    add(3);
}

void func(){
    num1 = 20;
}

int add(int i){
    static int sum = 0;
    sum += i;
    printf("sum:%d\n", sum);
}
