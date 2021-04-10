#include <stdio.h>
#include <stdlib.h>

struct Student {
    int age;
    double gpa;
    char grade;
};

int main()
{
    // Structs

    struct Student student1; // this is self explanatory.
    student1.age = 19;
    student1.gpa = 3.4; // i don't wanna type this bc you should know this
    student1.grade = 'B';

    return 0;
}
