#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "headers/stack.h"

enum StackException{INCORRECT_OPERATION,};
int calculateResultbyOperasion(int val1, int val2, char *token);
void displayErrorMessage();

void checkOperandValidity(char *token);

int main() {

    const char operators[]="+-*/%";
    char expression1[]=" 2 5 3 6 + * * 15 / 2 - ";
    char expression2[]=" 2 5 3 6 + * * 15 / ";
    char expression3[]=" 2 5 3 6 + * * 15 / 2 ";
    Stack stack;
    createStack(strlen(expression1),&stack);

    const char separators[2]=" ";
    char *token = strtok(operators,separators);

    //token = strtok(expression1,s);

    while(token!=NULL){
        printf("%s\n",token);
        //stack
        //int result = atoi(token);
        if(strstr(operators, token)){
            //printf("%s is an operator\n",token);
            int val1 = pop(&stack);
            int val2 = pop(&stack);
            int result = calculateResultbyOperasion(val2,val1,token);
            printf("parcial result: %d\n",result);
            push(&stack, result);
            //2 db pop
            //muvelet elvegzese ->switch
            //push -> reszeredmenyt
        }else{
            //printf("%s is a number\n", token);
            checkOperandValidity(token);
            int val = atoi(token);
            printf("%d is a number'n",val);
            push(&stack,val);
        }
        //else if(isValidOperand()){
            //atop -> push
       // }
       // else{
       //     printf("Error");
       // }
        token = strtok(NULL,separators);
    }
    //a stack egy elembol kell alljon

    int finalResult = pop(&stack);
    if(isEmpty(stack)){
        printf("Error");
    } else{
        printf("The final result is: %d\n",finalResult);
    }
    destroyStack(&stack);
    return 0;
}

void checkOperandValidity(char *token) {
    for (int i = 0; i < strlen(token); ++i) {
        if(isdigit(token[i])){
            displayErrorMessage();
        }
    }
}

int calculateResultbyOperasion(int val1, int val2, char *token) {
    char operation = token[0];
    switch (operation) {
        case '+': return val1 + val2;
        case '-': return val1 - val2;
        case '*': return val1 * val2;
        case '/': return val1 / val2;
        case '%': return val1 % val2;
        default: return 1;
    }
}


