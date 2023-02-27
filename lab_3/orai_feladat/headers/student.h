//
// Created by Sára Kis on 27.02.2023.
//

#ifndef ORAI_FELADAT_STUDENT_H
#define ORAI_FELADAT_STUDENT_H

enum Gender{MALE, FEMALE, OTHER};

typedef struct {
    int year, month, day;
}Date_t;

typedef struct{
    char name[50];
    char neptunCode[8];
    char birthPlace[26];
    Date_t birthDate;
    enum Gender gender;
    float examResult;

}Student_t;

void readStudentDetails(Student_t *pStudent);
void printStudent(Student_t student);
void allocateMemoryForStudents(Student_t **dpStudents, int numberOfStudents);
void readAllStudentsDetails(Student_t **dpStudents, int *numberOfStudents, const char *input);
void printAllStudents(Student_t *pStudents, int numberOfStudents, const char *destination);
int getNumberOfStudentsByGender(Student_t *pStudents, int numberOfStudents, enum Gender gender);
void printStudentsFromSpecificCity(Student_t *pStudents, int numberOfStudents, const char *city);
Student_t findStudentByNeptunCode(Student_t *pStudents, int numberOfStudents);
void sortStudentsByName(Student_t *pStudents, int numberOfStudents);
void sortStudentsByAgeAndExam(Student_t *pStudents, int numberOfStudents);

#endif //ORAI_FELADAT_STUDENT_H
