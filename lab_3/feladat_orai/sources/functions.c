//
// Created by Sára Kis on 01.03.2023.
//

#include "functions.h"

char* getGenderType(enum Gender gender){
    switch (gender) {
        case MALE:
            return "Male";
        case FEMALE:
            return "Female";
        default:return "Other";
    }
}
void printStudent(Student_t student){
    printf("%s\n",student.name);
    printf("%s\n",student.neptunCode);
    printf("%s\n",student.birthPlace);
    printf("%d,%d,%d\n",student.birthDate.year,student.birthDate.month,student.birthDate.day);
    printf("%s\n", getGenderType(student.gender));
    printf("%f\n",student.examResult);
}

void readStudentDetails(Student_t *pStudent){
    scanf("%[^\n]\n", pStudent->name);
    scanf("%[^\n]\n", pStudent->neptunCode);
    scanf("%[^\n]\n", pStudent->birthPlace);
    scanf("%d", &pStudent->birthDate.year);
}

void readAllStudentsDetails(Student_t **dpStudents, int *numberOfStudents, const char *input){
    if(!freopen(input,"r", stdin)){
        printf(FILE_OPENING_ERROR_MESSAGE);
        exit(FILE_OPENING_ERROR_CODE);
    }
    scanf("%i", numberOfStudents);
    allocateMemoryForStudents(*numberOfStudents, dpStudents);
    for (int i = 0; i < *numberOfStudents; ++i) {
        readStudentDetails(&(*dpStudents)[i]);
    }
    //freopen();
}