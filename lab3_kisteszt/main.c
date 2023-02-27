#include "functions.h"

int main() {
    int n, *array;
    readArray(&n, &array, "CON");
    printArray(n, array, "CON");
    deallocateMemoryForArray( &array);
    return 0;
}