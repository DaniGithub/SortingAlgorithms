#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int arrLen = 10000;
    int unsorted[arrLen];
    time_t t;
    srand((unsigned) time(&t));

    for (int i = 0; i < arrLen; i++)
    {
        unsorted[i] = rand() % 11;
    }

    int swapCount = -1;
    int unsortedLength = arrLen - 1;

    do
    {
      swapCount = 0;
      for (int i = 0; i < unsortedLength; i++)
      {
        if (unsorted[i] > unsorted[i+1])
        {
          swapCount++;
          int tmp = unsorted[i];
          unsorted[i] = unsorted[i+1];
          unsorted[i+1] = tmp;
        }
      }
      unsortedLength--;
    }
    while(swapCount != 0);

    for (int l = 0; l < arrLen; l++)
    {
        printf("%i-",unsorted[l]);
    }

    printf("\n");
}
