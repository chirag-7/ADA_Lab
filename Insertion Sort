#include <stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
void insertion_sort(int a[],int n)
{
    int i, j, temp;  
    for (i = 1; i < n; i++) {  
        temp = a[i];  
        j = i - 1;  
 
        while(j>=0 && temp <= a[j])    
        {    
            a[j+1] = a[j];    
            j = j-1;    
        }    
        a[j+1] = temp;    
    }  
   
}  

void printArr(int a[], int n)
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", a[i]);  
}  
 
int main()  
{  
    clock_t start,end;
    printf("\n Enter the size of array :");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("\n Enter array :");
    for(int i=0;i<n;i++)
        a[i]=rand();
    start=clock();
   
    insertion_sort(a, n);
   
    end=clock();
    printf("\n The time taken for sorting is %f Seecs ",((double)(end-start)/CLOCKS_PER_SEC));
     
    return 0;  
}    
