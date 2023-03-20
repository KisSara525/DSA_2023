//
// Created by Sára Kis on 20.03.2023.
//

#ifndef MINTA_TETEL_MEDICALCENTER_H
#define MINTA_TETEL_MEDICALCENTER_H

#include <patient.h>

typedef struct {
    int capacity;
    int front;
    int rear;
    Patient_t *elements;
}MedicalCenter_t;

void createQueue(int capacity, MedicalCenter_t *queue);

#endif //MINTA_TETEL_MEDICALCENTER_H
