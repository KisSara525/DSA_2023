#include <stdio.h>
#include <string.h>
#include "headers/stack.h"

int main() {
    char operators[]="+-*/%";
    char expression1[]=" 2 5 3 6 + * * 15 / 2 - ";
    char expression2[]=" 2 5 3 6 + * * 15 / ";
    char expression3[]=" 2 5 3 6 + * * 15 / 2 ";
    Stack stack;
    createStack(strlen(expression1),&stack);
    const char s[2]=" ";
    char *token;
    token = strtok(expression1,s);
    while(token!=NULL){
        printf("%s\n",token);
        //stack
        //int result = atoi(token);
        if(isOperator()){
            //2 db pop
            //muvelet elvegzese ->switch
            //push -> reszeredmenyt
        }
        else if(isValidOperand()){
            //atop -> push
        }
        else{
            printf("Error");
        }
        token = strtok(NULL,s);
    }
    //a stack egy elembol kell alljon

    return 0;
}
