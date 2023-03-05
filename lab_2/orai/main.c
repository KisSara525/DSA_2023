#include <stdio.h>
#include "functions.h"


int main() {
    /*
    int m, start, end, *numbers;
    printf("NUmber of generetat items:");
    scanf("%d",&m);
    printf("Start=");
    scanf("%d",&start);
    printf("End= ");
    scanf("%d",&end);
    if(start > end){
        int aux = start;
        start = end;
        end = aux;
    }
    allocateMemoryForArray2(m,&numbers);
    fillWithRandomNumbers(m,numbers,start, end);
    printArray(m,numbers,"CON");
    printf("Number of even numbers: %d\n", numberOfEvenNumbers(m,numbers));
    printf("Sum of positiv numbers: %d\n", sumOfPositiveNumbers(m,numbers));
    deallocateMemoryForArray(&numbers);
    */

    ///feladatok 2dimenzios tombokkel
    int rows, cols, **pMatrix;
    //pMatrix = allocateMemoryForMatrix1(rows,cols);
    //allocateMemoryForMatrix2(rows,cols,&pMatrix);
    readMatrix(&rows, &cols, &pMatrix, "matrix.in");
    printMatrix(rows,cols,pMatrix,"CON");
    deallocateMatrix(rows,&pMatrix);
    if(!pMatrix){
        printf("Matrix is NULL");
    }


    return 0;
}
