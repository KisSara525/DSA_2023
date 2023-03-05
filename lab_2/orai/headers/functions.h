//
// Created by Sára Kis on 04.03.2023.
//

#ifndef ORAI_FUNCTIONS_H
#define ORAI_FUNCTIONS_H

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int sum(int number1,int number2);
float minimum(float number1, float number2, float number3);
int* allocateMemoryForArray1(int n);
void allocateMemoryForArray2(int n, int **dpArray);
void readArray(int *pn, int **dpArray, const char *input);
void printArray(int n, int *pArray, const char *output);
void deallocateMemoryForArray(int **dpArray);
float avg(float number1, float number2);
float maximum(float number1, float number2, float number3);
void fillWithRandomNumbers(int n, int *pArray, int start, int end);

int numberOfEvenNumbers(int n, int *pArray);
int sumOfPositiveNumbers(int n, int *pArray);

//int** allocateMemoryForMatrix1(int rows, int cols);
//void allocateMemoryForMatrix2(int rows, int cols, int ***dpMatrix);
void deallocateMatrix(int rows,int ***dpMatrix);
void readMatrix(int *pRows, int *pCols, int ***dpArray, const char *input);
void printMatrix(int rows, int cols, int **pMatrix, const char *output);

int minimumValueOfRow(int cols, int *pRow);
int* rowMinimums(int rows, int cols, int **pMatrix);
int minimumValueOfMatrix(int rows, int cols, int **pMatrix);
float averageOfMatrixElements(int rows, int cols, int **pMatrix);

void deallocateMemoryForMatrix(int rows, int ***dpMatrix);

#endif //ORAI_FUNCTIONS_H
