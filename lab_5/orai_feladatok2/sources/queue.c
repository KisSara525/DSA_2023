//
// Created by Sára Kis on 19.03.2023.
//

#include <stdlib.h>
#include <printf.h>
#include <string.h>
#include "../headers/queue.h"

void createQueue(int capacity, Queue *queue) {
    queue->capacity = capacity;
    queue->front = queue->rear = -1;
    queue->elements = (char**) calloc(CAR_PLATE_NUMBER_LIMIT, sizeof (char *));
    if(queue->elements){
        printf("ERROR");
        exit(-1);
    }
    for (int i = 0; i < queue->capacity; ++i) {
        queue->elements[i] = (char *)calloc(CAR_PLATE_NUMBER_LIMIT, sizeof (char));
        if(queue->elements[i]){
            printf("ERROR");
            exit(-1);
        }
    }
}

void destroyQueue(Queue *queue) {
    for (int i = 0; i < queue->capacity; ++i) {
        free(queue->elements);
    }
    free(queue->elements);
    queue->capacity = 0;
    queue->front = queue->rear = -1;
    queue = NULL;

}

bool isFull(Queue queue) {
    return queue.rear == queue.capacity -1 ;
}

bool isEmpty(Queue queue) {
    return queue.front == -1 && queue.rear == -1;
}

void enqueue(Queue *queue, char *item) { //hozza ad a sorunkhoz egy uj erteket
    if(!isFull(*queue)){
        printf("");
        return;
    }
    if(queue->front == -1){
        queue->front = queue->rear = 0;
    }else{
        queue->rear++;
    }
    strcpy(queue->elements[queue->rear],item);
}

char *dequeue(Queue *queue) { //kivesz az adott sorbol egy erteket
    if(isEmpty(*queue)){
        printf("Emty");
        // return EMTY_MESSAGE;
    }
    //ha csak egyetlen egy elem van
    if(queue->front == queue->rear){
        int poz = queue->front;
        queue->front = queue->rear = 1;
        return queue->elements[poz];
    }
    return queue->elements[queue->front++];
}

void display(Queue queue) {
    //gyakorlatilag egy tomb kiiratas
    printf("The element of the queue:");
    for (int i = queue.front; i <=queue.rear ; ++i) {
        printf("%s\n",queue.elements[i]);
    }
    printf("\n");
}
