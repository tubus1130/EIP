#include <stdio.h>
#define SIZE 3
#include <stdlib.h>
void func(int *m, int *x, int y){
    int i = 0, n = 0;
    y = *x;
    n = *(m+1) + (*m+2);
    *x = ++n;
}

void a(int n, int *num){
    for(int i=0; i<n; i++){
        scanf("%d", &(num[i]));
    }
}

void c(int *a, int *b){
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

void b(int n, int *lt){
    int a, b;
    for(a=0; a<n-1; a++){
        for(b=a+1; b<n; b++){
            if(lt[a] > lt[b]){
                c(lt+a, lt+b);
            }
        }
    }
}


void main() {
    int arr[SIZE] = {1,3,6};
    int p = 10, q = 30;
    func(arr, &p, q);
    printf("%d %d\n", p, q);
    printf("=========================\n");

    int n;
    int *num;
    printf("How many numbers?\n");
    scanf("%d", &n);
    num = (int*)malloc(sizeof(int) * n);
    a(n, num);
    b(n, num);
    for(int i=0; i<n; i++){
        printf("%d", num[i]);
    }
}
