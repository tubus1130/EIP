#include <stdio.h>

void main() {
    /*
        1. printf 출력순서
        printf는 뒤에부터
        ++i는 값만 증가시키고 아직 출력x
        i++는 출력바로하고 값 증가

        2. ++중복

        3. fork함수
        - 자식프로세스 생성
        - 부모 : 0보다큰값
        - 자식 : 0
        - 실패 : -1
    */
    int i = 5;
    printf("%d, %d, %d, %d\n", i++, ++i, i++, ++i); // 8, 9, 6, 9
    int j = 5;
    printf("%d, %d, %d, %d\n", --j, j--, j--, --j); // 1, 3, 4, 1
    int k = 5;
    printf("%d, %d, %d, %d, %d\n", --k, k--, k--, k, --k); // 1, 3, 4, 1, 1
    printf("====================\n");

    i = 5;
    int z = i++ + i++ + i++;
    printf("%d, %d\n", i, z); // 8, 18

    i = 5;
    z = ++i + ++i + ++i;
    printf("%d, %d\n", i, z); // 연산을 할떄 i값을 참조
    // z = 7 + 7 + 8

    i = 5;
    z = ++i + i++ + ++i;
    printf("%d, %d\n", i , z);
    //z = 7 + 6 + 8
    printf("==================\n");

    i = 0;
    int v = 1, n = 5;
    pid_t pid;
    pid = fork();
    /*
        부모먼저(0보다큼)
        그다음 자식(0)
    */
    if(pid < 0){
        for(i=0; i<n; i++){
            v += (i+1);
        }
        printf("c = %d\n", v);
    }else if(pid == 0){
        for(i=0; i<n; i++){
            v *= (i+1);
        }
        printf("b = %d\n", v);
    }else{
        wait(NULL); // 부모기다리고 자식꺼 수행한 후에 다시돔
        for(i=0; i<n; i++){
            v += 1;
        }
        printf("a = %d\n", v);
    }
}
