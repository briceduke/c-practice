#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Input
    
    char name[10]; // Allocate size

    printf("Enter your name: ");
    fgets(name, 10, stdin); // variable to save to, size limit, std input

    int age;
    printf("Age: ");
    scanf("%d", &age); // save by pointer reference, same thing for other types, but for doubles scan using %lf

    return 0;
}
