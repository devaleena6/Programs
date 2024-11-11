// C program for array implementation of stack 
#include <limits.h> 
#include <stdio.h> 
#include <stdlib.h> 

// A structure to represent a stack 
struct Stack { 
    int top; 
    unsigned capacity; 
    int* array; 
}; 

// function to create a stack of given capacity. It initializes size of 
// stack as 0 
struct Stack* createStack(unsigned capacity) 
{ 
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack)); 
    stack->capacity = capacity; 
    stack->top = -1; 
    stack->array = (int*)malloc(stack->capacity * sizeof(int)); 
    return stack; 
} 

int isfull(struct Stack* stack){
    return stack->top==stack->capacity -1 ;
}

int isempty(struct Stack* stack){
    return stack->top==-1;
}

void push(struct Stack* stack, int item){
    if (isfull(stack))
    return;
    stack->array[++stack->top]=item;
    printf("\nThe item is:%d", item);
}

int pop(struct Stack*stack){
    if (isfull(stack))
    return INT_MIN;
    return stack->array[stack->top--];
}

int peek(struct Stack* stack){
    if (isfull(stack))
    return INT_MIN;
    return stack->array[stack->top];
}

int main() 
{ 
    struct Stack* stack = createStack(100); 

    push(stack, 10); 
    push(stack, 20); 
    push(stack, 30); 

    printf("%d popped from stack\n", pop(stack)); 

    return 0; 
} 

