#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Printing
    printf("Hello\n");
    char testGrade = "A"; // Letter
    char name[] = "Mike"; // String

    short age0 = 10; // 16 bits
    int age1 = 20; // 16 bits+
    long age2 = 30; // 32 bit+
    long long age3 = 40; // 32 bit+

    float gpa0 = 2.5; // single precision
    double gpa1 = 3.5; // double precision
    long double gpa2 = 3.6; // extended precision

    int isTall;
    isTall = 1; // use 0 or 1 for boolean

    const int IS_TALL = 1; // uppercase naming convention for constants

    printf("%s, your grade is %c \n", name, testGrade);

    printf("%d \n", (int)3.14); // Cast double as int

    return 0;
}