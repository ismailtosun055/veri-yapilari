#include <stdio.h>
#include <stdlib.h>
#define MAX 10
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void bubbleSort(int array[] , int n)
{
    int i,j;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(array[j]>array[j+1])
                swap(&array[j],&array[j+1]);
        }
    }
}

void yazdir(int array[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf(" %d",array[i]);
    }
}


int main()
{
    int array[MAX];
    int n= sizeof(array)/sizeof(array[0]);

    bubbleSort(array , n);
    yazdir(array , n);

    return 0;
}
