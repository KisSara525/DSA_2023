#include <stdio.h>
#include "functions.h"


int main() {
    /*
    int num1, num2;
    printf("Adj meg ket szamot: ");
    scanf("%d%d",&num1,&num2);
    printf("A ket szam osszege: %i\n", sum(num1,num2));

    float num3,num4,num5;
    printf("Adj meg harom szamot: ");
    scanf("%f%f%f",&num3,&num4,&num5);
    printf("A minimum: %.2f\n", minimum(num3,num4,num5));
    printf("A maximum: %.2f\n", maximum(num3,num4,num5));
    printf("Az avg: %.2f", avg(num3,num4));
*/

    int n,*dpArray;
    //dpArray= allocateMemoryForArray1(n);
    //allocateMemoryForArray2(n, &pArray);
    readArray(&n, &dpArray,"be.txt");
    printArray(n, dpArray,"CON");
    deallocateMemoryForArray(&dpArray);
    /*
    if(dpArray == NULL){
        printf("is null");
    }
    */

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
    deallocateMemoryForArray(&numbers);
    return 0;
}
