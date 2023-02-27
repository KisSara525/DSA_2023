//
// Created by Sára Kis on 16.02.2023.
//

#ifndef FELADATOK_FUNCTIONS_H
#define FELADATOK_FUNCTIONS_H
#include <stdio.h>
#include <stdlib.h>

int* allocateMemoryForArray1(int n);
void allocateMemoryForArray2(int n, int **dpArray);
void readArray(int *n, int **dpArray, const char *input);
void printArray(int n, int *pArray, const char *output);
void deallocateMemoryForArray(int **dpArray);
void readMAtrix(int pRows, int pCols, int ***dpArray, const char input);
#endif //FELADATOK_FUNCTIONS_H
