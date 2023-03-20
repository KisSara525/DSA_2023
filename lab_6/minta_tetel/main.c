#include <stdio.h>

#include <patient.h>
#include <string.h>

int main() {
    Patient_t patient1 =
            {
            "Ion Ionescu",
            "1944567834562",
            {12,2,1996},
            MIGRAINES
    };
    FILE *fout = freopen("CON","w",stdout);
    printPatient(patient1,fout);
    fclose(fout);

    FILE *fin = fopen("CON","r");
    Patient_t patient2;
    readPatient(&patient2,fin);
    char fileName[20];
    strcpy(fileName,patient2.CNP);
    strcat(fileName,"txt");
    fout = fopen(fileName,"w");
    printPatient(patient2,fout);
    fclose(fout);
    return 0;
}
