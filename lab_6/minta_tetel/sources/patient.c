//
// Created by Sára Kis on 20.03.2023.
//

#include <string.h>
#include "../headers/patient.h"

enum Disease getDiseaseByString(char *type){
    if(strcmp(type,"INFLUENZA")==0) return INFLUENZA;
    if(strcmp(type,"DIABETES")==0) return DIABETES;
    if(strcmp(type,"CANCER")==0) return CANCER;
    if(strcmp(type,"HYPERTENSION")==0) return HYPERTENSION;
    if(strcmp(type,"ASTHMA")==0) return ASTHMA;
    if(strcmp(type,"HEPATITIS")==0) return HEPATITIS;
    if(strcmp(type,"DEPRESSION")==0) return DEPRESSION;
    if(strcmp(type,"MIGRAINES")==0) return MIGRAINES;
    if(strcmp(type,"ANEMIA")==0) return ANEMIA;
    if(strcmp(type,"OBESITY")==0) return OBESITY;
    if(strcmp(type,"ALLERGIES")==0) return ALLERGIES;
    return INFLUENZA;
}

char* getDiseaseCharByEnum(enum Disease disease){
    switch (disease) {
        case INFLUENZA: return "INFLUENZA";
        case DIABETES: return "DIABETES";
        case CANCER: return "CANCER";
        case HYPERTENSION: return "HYPERTENSION";
        case ASTHMA: return "ASTHMA";
        case HEPATITIS: return "HEPATITIS";
        case DEPRESSION: return "DEPRETION";
        case MIGRAINES: return "MIGRAINES";
        case ANEMIA: return "ANEMIA";
        case OBESITY: return "OBESITY";
        case ALLERGIES: return "ALLERGIES";
        default: return "MIGRAINES";
    }
}

void readPatient(Patient_t *pPatient, FILE *fin) {
    char disease[20];
    fscanf(fin, "%[^\n]\n", pPatient->name);
    fscanf(fin, "%s", pPatient->CNP);
    fscanf(fin, "%s", disease);
    pPatient->disease = getDiseaseByString(disease);
    fscanf(fin,"%d%d%d", &pPatient->birthDate.day,&pPatient->birthDate.mont,&pPatient->birthDate.year);
}

void printPatient(Patient_t pPatient, FILE *fout) {
    fprintf(fout,"%s\n",pPatient.name);
    fprintf(fout,"%s\n",pPatient.CNP);
    fprintf(fout,"%s\n", getDiseaseCharByEnum(pPatient.disease));
    fprintf(fout,"\t%d/%d/%d",pPatient.birthDate.day,pPatient.birthDate.mont,pPatient.birthDate.day);
}
