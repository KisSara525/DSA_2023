//
// Created by Sára Kis on 27.02.2023.
//

#include "functions.h"

/**
 * Calculates the sum of two integers
 * @param number1
 * @param number2
 * @return the value of sum
 */

int sum(int number1, int number2){
    return number1+number2;
}
/**
 * Finds the minimum
 * @param number1
 * @param number2
 * @param number3
 * @return
 */
float minimum(float number1, float number2, float number3){
    float min;
    if(number1 < number2){
        min = number1;
    }else{
        min=number2;
    }
    if (min > number3){
        min = number3;
    }
    return min;
}
/**
 * Allocates memory from a one dimentional array returns the
 * @param n
 * @return pointer to an int
 */
int* allocateMemoryForArray1(int n){
    int *pArray = (int*)malloc(n*sizeof(int) );
    if(!pArray){
        printf(MEMOMY_ALLOCATION_ERROR_MESSAGE);
        exit(MEMOMY_ALLOCATION_ERROR_CODE);
    }
    return pArray;
}
/**
 * Allocets memory for array
 * @param n
 * @param dpArray (double pointer to an array)
 */
void allocateMemoryForArray2(int n, int **dpArray){
    //int* -> int* => &
    // int** -> int => *
    *dpArray = (int*)malloc(n*sizeof(int) );
    if(!(*dpArray)){
        printf(MEMOMY_ALLOCATION_ERROR_MESSAGE);
        exit(MEMOMY_ALLOCATION_ERROR_CODE);
    }
}

/**
 * Reads all data from spesific input
 * Calls the memory allocatio function
 * @param n
 * @param dpArray
 * @param input (filenam)
 */
void readArray(int *pn, int **dpArray, const char *input){
    if(!freopen(input, "r", stdin)){
        printf(FILE_OPENING_ERROR_MESSAGE);
        exit(FILE_OPENING_ERROR_CODE);
    }
    scanf("%d",pn); //nem kell az & jel mert az mar eleve egy cim
    allocateMemoryForArray2(*pn,dpArray);
    for (int i = 0; i < *pn; ++i) {
        //scanf("%d",&(*dpArray[i]));
        scanf("%d",*dpArray+i);
    }

    freopen("CON","r",stdin);
}
/**
 * Prints all the outputs from array
 * @param n
 * @param pArray
 * @param output
 */
void printArray(int n, int *pArray, const char *output){
    freopen(output, "w", stdout);
    printf("The elements of the array");
    for (int i = 0; i < n; ++i) {
        printf("%d",pArray[i]);
    }
    printf("\n");

    freopen("CON","w", stdout);
}

void deallocateMemoryForArray(int **dpArray){
    free(*dpArray);
    *dpArray = NULL;

}

float avg(float number1, float number2){
    return (number1 + number2)/2;
}

float maximum(float number1, float number2, float number3){
    float max;
    if(number1 > number2){
        max = number1;
    }else{
        max=number2;
    }
    if (max < number3){
        max = number3;
    }
    return max;
}

void fillWithRandomNumbers(int n, int *pArray, int start, int end){
    srand(time(NULL));
    for (int i = 0; i < n; ++i) {
        pArray[i] =start + rand() % (end - start +1); //vegso - a kezdeti + 1
    }
}