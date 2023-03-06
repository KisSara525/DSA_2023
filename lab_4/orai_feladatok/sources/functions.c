//
// Created by Sára Kis on 06.03.2023.
//

#include "functions.h"
#include <stdlib.h>
#include <stdio.h>

void createIntArray(int capacity, IntArray *pArray) {
    pArray->capacity = capacity;
    pArray->size = 0;
    pArray->elements = (int*)calloc(pArray->capacity, sizeof (int));
    if(!pArray == NULL){
        printf("ERROR");
        exit(-1);
    }
}

void printArray(IntArray array) {
    if(isEmpty(array)){
        printf("ERROR");
    }
    printf("The elements of the array: ");
    for (int i = 0; i < array.size; ++i) {
        printf("%i ", array.elements[i]);
    }
    printf("\n");
}

bool isEmpty(IntArray array) {
    return array.size == 0;
}

bool isFull(IntArray array) {
    return array.size == array.capacity;
}

void insertAt(IntArray *pArray, int position, int item) {

    if (isFull(*pArray)) return;
    if(position < 0 || position > pArray->size) {
        printf("ERROR");
        return;
    }
    if(pArray->size == position) {
        insertLast(pArray, item);
        return;
    }
    if(position == 0) {
        insertFirst(pArray, item);
        return;
    }
    for (int i = pArray->size-1; i >= position; --i) {
        pArray->elements[i+1] = pArray->elements[i];
    }
    pArray->elements[position] = item;
    pArray->size++;
}

void insertFirst(IntArray *pArray, int item) {
    if (isFull(*pArray)) return;
//shifting the rest of the elements downwards
    for (int i = pArray->size-1; i >= 0; --i) {
        pArray->elements[i+1] = pArray->elements[i];
    }
    pArray->elements[0] = item;
    pArray->size++;
}

void insertLast(IntArray *pArray, int item) {
    if (isFull(*pArray)) return;
    pArray->elements[pArray->size++] = item;
}

void deleteItemAt(IntArray *pArray, int position) {
    if(isEmpty(*pArray)) {
        printf("ERROR");
        return;
    }
    if ((position < 0 || position >= pArray->size)) {
        printf("ERROR");
        return;
    }
    for (int i = position; i < pArray->size; ++i) {
        pArray->elements[i] = pArray->elements[i + 1];
    }
    pArray->size--;
}

int search(IntArray pArray, int item) {
    if(isEmpty(pArray)) {
        printf("ERROR");
        return -1;
    }
    for (int i = 0; i < pArray.size; ++i) {
        if(pArray.elements[i] == item) return i;
    }
    return -1;
}

bool update(IntArray *pArray, int position, int newItem) {
    if(isEmpty(*pArray)) {
        printf("ERROR");
        return false;
    }
    if ((position < 0 || position >= pArray->size)) {
        printf("ERROR");
        return false;
    }
    pArray->elements[position] = newItem;
    return true;
}

void deallocateIntArray(IntArray *pArray) {
    free(pArray->elements);
    pArray->elements = NULL;
    pArray = NULL;
}



