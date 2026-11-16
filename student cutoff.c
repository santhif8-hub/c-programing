#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int maths, physics, chemistry;
    float cutoff;

    if (argc != 4)
    {
        printf("Enter three subject marks");
        return 1;
    }

    maths = atoi(argv[1]);
    physics = atoi(argv[2]);
    chemistry = atoi(argv[3]);

    cutoff = (maths / 2.0) + (physics / 4.0) + (chemistry / 4.0);

    printf("Student Cutoff = %.2f", cutoff);

    return 0;
}