#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arrLen = 100000;
int unsorted[100000];

void insert (int ai, int arr[arrLen]);

int main(void) {
    time_t t;
    srand((unsigned) time(&t));

    // Insert Random Numbers Into Unsorted Array
    for (int k = 0; k < arrLen; k++)
    {
      unsorted[k] = rand() % 11;
    }

    // Use Insertion sort to sort the array
    for (int i = 0; i < arrLen; i++)
    {
      insert(i, unsorted);
    }
    
    // Display the sorted array
    for (int l = 0; l < arrLen; l++)
    {
      printf("%d-", unsorted[l]);
    }

    printf("\n");
}

void insert (int ai, int arr[arrLen])
{
  for (int i = 0; i < arrLen; i++)
  {
    if (arr[i] >= arr[ai])
    {
      int n = arr[ai];
      
      for (int j = ai; j > i; j--)
      {
        arr[j] = arr[j-1];
      }
      
      arr[i] = n;
      break;
    }
  }
}