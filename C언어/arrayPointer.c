#include <stdio.h>
#include <stdlib.h>
#define N 3

void main() {
    /*
        36. 배열포인터
        - 배열의 시작 주소값을 저장할 수 있는 포인터
        - 2차원 배열의 구조
        - 그냥 하나의 포인터일 뿐이다.
    */

    int (*in3)[2]; // 1행을 2개씩 짜른다.
    int num3[3] = {1,2,3};
    in3 = num3;
    
    printf("%d\n", in3);
    printf("%d\n", num3);
    printf("%d\n", *in3);
    printf("%d\n", **in3); // 1
    printf("%d\n", *(*in3+1)); // 2
    printf("%d\n", *(*in3+2)); // 3
    printf("%d\n", *in3[1]); // 3
    printf("=====================\n");
    
    int (*in2)[4];
    int num2[3][3] = {1,2,3,4,5,6,7,8,9};
    in2 = num2;

    printf("%d\n", **in2); // 1
    printf("%d\n", *(*in2+1)); // 2
    printf("%d\n", **(in2+1)); // 5
    printf("=====================\n");

    int (*in)[N], *out, sum=0;
    in = (int (*)[N]) malloc (N*N*sizeof(int));
    out = (int *) in;
    for(int i=0; i<N*N; i++){
        out[i] = i;
    }
    for(int i=0; i<N; i++){
        sum += in[i][i];
    }
    printf("%d\n", sum);
}
