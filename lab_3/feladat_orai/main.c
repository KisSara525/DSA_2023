#include <stdio.h>
#include "functions.h"

int main() {
    Student_t student1 = {
            "Kis Sara",
            "AVLM07",
            "Temesvar",
            {2002, 10, 25},
            FEMALE,
            9.5};
    printStudent(student1);

    return 0;
}
