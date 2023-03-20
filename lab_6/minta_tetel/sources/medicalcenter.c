//
// Created by Sára Kis on 20.03.2023.
//

#include <stdlib.h>
#include "medicalcenter.h"

void createQueue(int capacity, MedicalCenter_t *queue) {
    queue->capacity = capacity;
    queue->front = queue->rear = -1;
    queue->elements = (Patient_t*)calloc(queue->capacity, sizeof(Patient_t));
}
