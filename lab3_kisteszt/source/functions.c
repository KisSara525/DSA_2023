#include "functions.h"
#include "constants.h"

int* allocateMemoryForArray1(int n) {
    int pArray = (int)malloc(n * sizeof(int));
    if (!pArray) {
        printf(MEMORY_ALLOCATION_ERR0R_MESSAGE);
        exit(MEMORY_ALLOCATION_ERROR_CODE);
    }
    return pArray;
}

void allocateMemoryForArray2(int n, int **dpArray) {
    dpArray = (int)malloc(n * sizeof(int));
    if (!(*dpArray)) {
        printf(MEMORY_ALLOCATION_ERR0R_MESSAGE);
        exit(MEMORY_ALLOCATION_ERROR_CODE);
    }

}

void readArray(int *n, int **dpArray, const char *input) {
    if (!freopen(input, "r", stdin)) {
        printf(FILE_OPENING_ERROR_MESSAGE);
        exit(FILE_OPENING_ERROR_CODE);
    }
    scanf("%i", n);
    allocateMemoryForArray2(*n, dpArray);
    for (int i = 0; i < *n; ++i) {
        //scanf("%i", &((*dpArray)[i]));
        scanf("%i",*dpArray + i);
    }
    freopen("CON", "r", stdin);
}

void printArray(int n, int *pArray, const char *output) {
    for (int i = 0; i < n; ++i) {
        printf("%i ", pArray[i]);
    }
}

void deallocateMemoryForArray(int **dpArray) {
    free(*dpArray);
    dpArray == NULL;
}

void readMAtrix(int pRows, int pCols, int ***dpArray, const char input){

}

/**
* Reads all elements of matrix
 * @param pRows
 * @param pCols
 * @param dpArray
 * @param input
*/