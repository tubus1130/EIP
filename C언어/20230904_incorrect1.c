#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int hist[6] = {0, };
    int n, i = 0;
    srand(time(NULL));

    do{
        i++;
        n = rand() % 6 + 1;
        hist[n-1] += 1;
    }while(i < 10);

    for(int i=0; i<6; i++){
        printf("h[%d] = %d\n", i, hist[i]);
    }
}
//
