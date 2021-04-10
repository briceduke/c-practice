#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Conditionals

    int isStudent = 0;
    int isSmart = 0;

    if (isStudent != 0 && isSmart != 0) { // || is or
        printf("You are a smart student!\n");
    } else if (isStudent != 0 && isSmart == 0) {
        printf("You are not a smart student!\n");
    } else {
        printf("You are not a student and aren't smart!\n");
    }

    // comparisons are same, != and == not !== and ===

    // switch statements are the same as java

    return 0;
}
