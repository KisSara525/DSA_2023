//
// Created by Sára Kis on 19.03.2023.
//

#ifndef ORAI_FELADATOK2_QUEUE_H
#define ORAI_FELADATOK2_QUEUE_H
#define CAR_PLATE_NUMBER_LIMIT 10

typedef struct {
    int capacity;
    int front;
    int rear;
    char **elements;
}Queue;

/**
* Creates the queue data structure, allocates memory for elements
* @param capacity
* @param queue
*/
void createQueue(int capacity, Queue *queue);
/**
* Deallocates the elements array -> free
* @param queue
*/
void destroyQueue(Queue* queue);
/**
* Checks whether the queue is full or not
* @param queue
* @return true/false
*/
bool isFull(Queue queue);
/**
* Checks whether the queue is empty or not
* @param queue
* @return true/false
*/
bool isEmpty(Queue queue);
/**
* Adds a new item to the end of the queue
 * FIFO first in firs out
* @param queue
* @param item
*/
void enqueue(Queue* queue, char* item);
/**
* Removes the first item from the queue
* @param queue
* @return
*/
char* dequeue(Queue* queue);
/**
* Prints all items of the queue
* @param queue
*/
void display(Queue queue);

#endif //ORAI_FELADATOK2_QUEUE_H
