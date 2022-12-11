#include <time.h>
#include <stdio.h>
int main()
{
    clock_t begin = clock();

// Print hello word 100 times 
    for (int i = 0; i < 100; i++)
    {
        printf("Hello World\n");
    }

    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("%f\n", time_spent);
}
