// This program increases a counter form 1 to 5, printing updates and then counts it back down to 1.

#include <stdio.h>

main()
{
    int ctr = 0;

    ctr = ctr + 1; // increase counter to 1
    printf("Counter is at %d.\n", ctr);
    ctr = ctr + 1; // increase counter to 2
    printf("Counter is at %d.\n", ctr);
    ctr = ctr + 1; // increase counter to 3
    printf("Counter is at %d.\n", ctr);
    ctr = ctr + 1; // increase counter to 4
    printf("Counter is at %d.\n", ctr);
    ctr = ctr + 1; // increase counter to 5
    printf("Counter is at %d.\n", ctr);
    ctr = ctr - 1; // decrease counter to 4
    printf("Counter is at %d.\n", ctr);
    ctr = ctr - 1; // decrease counter to 3
    printf("Counter is at %d.\n", ctr);
    ctr = ctr - 1; // decrease counter to 2
    printf("Counter is at %d.\n", ctr);
    ctr = ctr - 1; // decrease counter to 1
    printf("Counter is at %d.\n", ctr);

    return 0;
}
