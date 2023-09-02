#include <stdio.h>

void main() {
    /*
        19. continue
        - 반복문 처음으로 돌아감(for문의 경우 증감식)

        19-1. break
        - 반복문 빠져나감
    */

    int i, sum = 0;
    for(i=1; i<=10; i+=2){
        if(i % 2 && i % 3){
            continue;
        }
        sum += i;
    }
    printf("%d\n", sum);
    printf("=========================\n");

    int j;
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("i : %d, j : %d\n", i, j);
        }
    }
    printf("=========================\n");
    sum = 0;
    for(i=0; i<3; i++){
        if(i==1){
            continue;
        }
        sum++;
    }
    printf("%d\n", sum);
    
    sum = 0;
    for(i=0; i<3; i++){
        if(i==1){
            break;
        }
        sum++;
    }
    printf("%d\n", sum);
    printf("=========================\n");

    int a, b, total = 0;
    for(a=1; a<10; a++){
        for(b=1; b<10; b++){
            if(b % 3 == 0){
                continue;
            }
            if(a % 4 == 0){
                break;
            }
            total++;
        }
    }
    printf("%d\n", total);
}
