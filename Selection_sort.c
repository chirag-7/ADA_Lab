#include <stdio.h>
#include <time.h>
#define SIZE 10000

int a[SIZE];

int main()
{
    printf("Enter array:\n");
    for ( int i = 0; i < SIZE; i++)
        a[i] = rand();
    clock_t end, start;
    start = clock();
   
    for (int i = 0; i < SIZE-1; i++)
    {
        int min = i;
        for (int j = i+1; j < SIZE; j++)
          if (a[j] < a[min])
            min = j;
        int temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
   
    end = clock();
   
    printf ("\nTime taken: %f", (double)(end - start)/(CLOCKS_PER_SEC));
    return 0;
}
