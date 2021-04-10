#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Loops

    int index = 1;
    while(index <= 5) {
        index++;
    }

    // do while
    do {
        index++;
    } while (index <= 5); // this is the same as the while loop above

    for (int i = 0; i < 5; i++) {
        printf("%d \n", i); // naming convention to name the var i in for loops
    }

    return 0;
}
