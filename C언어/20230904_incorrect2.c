#include <stdio.h>
#define MAX_SIZE 10
int stack[MAX_SIZE];
int top = -1;

void push(int item){
    if(top >= MAX_SIZE - 1){
        printf("stack is full\n");
    }else{
        stack[++top] = item;
    }
}

int pop(){
    if(top == -1){
        printf("stack is empty\n");
        return -1;
    }
    return stack[top--];
}

int is_empty(){
    if(top == -1){
        return 1;
    }else{
        return 0;
    }
}

void main() {
    push(20);
    push(30);
    push(40);
    while(!is_empty()){
        printf("value = %d\n", pop());
    }
}
