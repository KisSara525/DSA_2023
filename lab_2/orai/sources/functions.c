//
// Created by Sára Kis on 04.03.2023.
//

#include "functions.h"

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
        printf("Error");
        exit(-1);
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
        printf("ERROR");
        exit(-1);
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
        printf("ERROR");
        exit(-2);
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



/**
 * Condition: paros-e?, szamolni
 * @param n
 * @param pArray
 * @return -> a paros elemeknek a szama
 */
int numberOfEvenNumbers(int n, int *pArray){
    int counter = 0;
    for (int i = 0; i < n; ++i) {
        if(pArray[i] % 2 == 0){
            counter++;
        }

    }
    return counter;
}

int sumOfPositiveNumbers(int n, int *pArray){
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if(pArray[i] > 0){
            sum = sum + pArray[i];
        }
    }
    return sum;
}

int** allocateMemoryForMatrix1(int rows, int cols){
    int **matrix =(int**)calloc(rows,sizeof (int*)); //soroknak helyet foglalunk
    if(!matrix){
        printf("ERROR");
        exit(-1);
    }
    for (int i = 0; i < rows; ++i) {
        matrix[i] = (int*) calloc(cols, sizeof (int)); //azon belul meg minden egyes elemnek is helyet foglalunk
        if(!matrix[i]){
            printf("ERROR");
            exit(-1);
        }
    }
    return matrix;
}


void printMatrix(int rows, int cols, int **pMatrix, const char *output){
    freopen(output,"w",stdout);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%5i",pMatrix[i][j]);
        }
        printf("\n");
    }
    freopen("CON", "w", stdout);
}

void deallocateMatrix(int rows, int ***dpMatrix){
    for (int i = 0; i < rows; ++i) {
        free((*dpMatrix)[i]);

    }
    free(*dpMatrix);
    *dpMatrix = NULL;
}

void allocateMemoryForMatrix2(int rows, int cols, int ***dpMatrix) {
    *dpMatrix =(int**)calloc(rows,sizeof (int*)); //soroknak helyet foglalunk
    if(!(*dpMatrix)){
        printf("ERROR");
        exit(-1);
    }
    for (int i = 0; i < rows; ++i) {
        (*dpMatrix)[i] = (int*) calloc(cols, sizeof (int)); //azon belul meg minden egyes elemnek is helyet foglalunk
        if(!(*dpMatrix)[i]){
            printf("ERROR");
            exit(-1);
        }
    }

}

void readMatrix(int *pRows, int *pCols, int ***dpArray, const char *input) {
    ///atiranyitas
    if(!freopen(input,"r",stdin)){
        printf("ERROR");
        exit(-2);
    }
    ///sorok oszlopok beolvasasa
    scanf("%d%d",pRows,pCols); //amiatt hogy cim nem kell & jel
    ///beolvasas
    allocateMemoryForMatrix2(*pRows,*pCols,dpArray);
    ///visszairanyitas
    for (int i = 0; i < *pRows; ++i) {
        for (int j = 0; j < *pCols; ++j) {
            scanf("%d",&((*dpArray)[i][j]));
        }
    }
    freopen("CON","r",stdin);
}
