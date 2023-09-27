#include <stdio.h>
#include <stdlib.h>

struct NODE {
    int data;
    struct NODE *pNext;
};

struct NODE *pHead;

void push(int data){
    struct NODE *pEnd = malloc(sizeof(struct NODE));
    pEnd->( _______ ) = pHead->( _______ );
    pEnd->data = data;
    pHead->( _______ ) = pEnd;
}

int pop(){
    int ret;
    struct NODE *pDel = pHead->( _______ );
    pHead->( _______ ) = pDel->( _______ );
    ret = pDel->data;
    free(pDel);
    return ret;
}

int main() {
    int r;
    pHead = malloc(sizeof(struct NODE));
    pHead->pNext = NULL;
    
    push(10);
    push(20);
    push(30);
    
    r = pop();
    printf("%d", r);
    r = pop();
    printf("%d", r);
    r = pop();
    printf("%d", r);

    return 0;
}

// 답) pNext
