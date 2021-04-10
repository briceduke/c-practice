#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Pointers
    int num = 10;
    printf("%p \n", &num); // Prints memory addr

    int *pNum = &num; // Store pointer as variable, put lowercase p as a convention

    printf("%p \n", *pNum); // Dereference pointer, aka get the actual value of the pointer

    return 0;
}
