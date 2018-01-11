#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int arrLen = 10000;
    int unsorted[arrLen];
    time_t t;
    srand((unsigned) time(&t));

    for (int i = 0; i < arrLen; i++)
    {
        unsorted[i] = rand() % 11;
    }

    for (int j = 0; j < arrLen; j++)
    {
        int min = j;

        for (int i = j + 1; i < arrLen; i++)
        {
            if (unsorted[i] < unsorted[min]) {
                min = i;
            }
        }

        if (min != j)
        {
            int tmp = unsorted[j];
            unsorted[j] = unsorted[min];
            unsorted[min] = tmp;
        }
    }

    for (int a = 0; a < arrLen; a++)
    {
        printf("%d-", unsorted[a]);
    }
    printf("\n");
}