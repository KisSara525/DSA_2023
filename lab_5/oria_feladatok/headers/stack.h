//
// Created by Sára Kis on 13.03.2023.
//

#ifndef ORIA_FELADATOK_STACK_H
#define ORIA_FELADATOK_STACK_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include "stack.h"

typedef struct {
    int capacity;
    int top;
    int *elements;
}Stack;

/**
* Initializing the capacity and size of stack,
* allocating memory for the @elements array
* @param capacity
* @param stack
*/
void createStack(int capacity, Stack * stack);
/**
* Deallocates the memory
* @param stack
*/
void destroyStack(Stack* stack);
/**
* Checks whether the stack is full
* @param stack
* @return
*/
bool isFull(Stack stack);

/**
* Checks whether the stack is empty
* @param stack
* @return
*/
bool isEmpty(Stack stack);
/**
* Pushes a new item to the stack,
* if it is not full
* @param stack
* @param item
*/
void push(Stack* stack, int item);
/**
* Removes the top element from the stack,
* if it is not empty
* @param stack
* @return
*/
int pop(Stack* stack); //kiveszi es visszateriti
/**
* Returns the top element of the stack,
* if it is not empty
* @param stack
* @return
*/
int peek(Stack stack); //csak visszateriti
/**
* Returns the size of the stack
* @param stack
* @return
*/
int size(Stack stack);

int isOperator(char operators);

int isValidOperand();

#endif //ORIA_FELADATOK_STACK_H
