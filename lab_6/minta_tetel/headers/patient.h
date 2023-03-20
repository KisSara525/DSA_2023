//
// Created by Sára Kis on 20.03.2023.
//

#include <stdio.h>

#ifndef MINTA_TETEL_PATIENT_H
#define MINTA_TETEL_PATIENT_H

typedef struct {
    int year,mont,day;
}Date_t;

enum Disease{INFLUENZA, DIABETES, CANCER,
    HYPERTENSION, ASTHMA, HEPATITIS, DEPRESSION, MIGRAINES,
    ANEMIA, OBESITY, ALLERGIES};

typedef struct {
    char name[40]; //nem muszaly dinamikus helyfoglalas
    char CNP[13];
    Date_t birthDate;
    enum Disease disease;

}Patient_t;

void readPatient(Patient_t *pPatient, FILE *fin);
void printPatient(Patient_t pPatient, FILE *fout);
char* getDiseaseCharByEnum(enum Disease disease);
#endif //MINTA_TETEL_PATIENT_H
