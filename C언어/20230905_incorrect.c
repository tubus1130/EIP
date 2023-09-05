#include <stdio.h>

int Soojebi(int base, int exp){
    int i, result = 1;
    for(i=0; i<exp; i++){
        result *= base;
        return result;
    }
}

void main() {
    printf("%d", Soojebi(2, 10));
}
