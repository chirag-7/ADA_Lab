#include <stdio.h>
#include <time.h>
int main()
{
    int n, key;
    clock_t end, start;
    printf("Enter no. of elements: ");
    scanf ("%d", &n);
    int a[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf ("%d", &a[i]);
    printf ("Enter key:");
    scanf ("%d", &key);
    start = clock();
    for (int i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            printf ("Key found at position %d.", (i+1));
            break;
        }
    }
    end = clock();
    printf ("\nTime taken: %f", (double)(end - start)/(CLOCKS_PER_SEC));
    return 0;
}}

