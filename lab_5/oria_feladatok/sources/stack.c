//
// Created by Sára Kis on 13.03.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include "stack.h"

void createStack(int capacity, Stack *stack) {
    stack->top = -1;
    stack->capacity = capacity;
    stack->elements = (int*)malloc(stack->capacity * sizeof (int));
    if(!stack->elements){
        printf("Error");
        exit(-1);
    }
}

void destroyStack(Stack *stack) {
    stack->capacity = 0;
    stack->top = -1;
    free(stack->elements);
    stack = NULL;
}

bool isFull(Stack stack) {
    return stack.top == stack.capacity-1;
}

bool isEmpty(Stack stack) {
    return stack.top == -1;
}

void push(Stack *stack, int item) {
    if(isFull(*stack)){
        printf("Error");
        exit(-1);
    }
    stack->elements[++stack->top] = item;
}

int pop(Stack *stack) {
    if(isEmpty(*stack)){
        printf("Error");
        return INT_MIN;
    }
    int save = stack->elements[stack->top];
    stack->elements[stack->top--] = 0;
    return save;
}

int peek(Stack stack) {
    if(isEmpty(stack)){
        printf("Error");
        return INT_MIN;
    }
    return stack.elements[stack.top];
}

int size(Stack stack) {
    return stack.top+1;
}

int isOperator(char operators) {
    return 0;
}
