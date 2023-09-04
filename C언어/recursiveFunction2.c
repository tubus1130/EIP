#include <stdio.h>

int func(int n){
    if(n%2==1){
        n = n-1;
    }
    if(n==0){
        return 0;
    }
    return(func(n-2) + n);
}

int my(int i, int j){
    if(i<3){
        i = j = 1;
    }else{
        i = i - 1;
        j = j - i;
        printf("%d, %d\n", i, j);
        return my(i, j);
    }
}

int recursion(int n){
    if(n<5){
        return 1;
    }else if(n%5 == 1){
        return n + recursion(n-1);
    }else{
        recursion(n-1);
    }
}

void main() {
    int result;
    result = func(19);
    printf("result : %d\n", result);
    printf("===========================\n");

    my(5, 14);
    printf("===========================\n");

    int n = recursion(16);
    printf("%d\n", n);
}
