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

void selectionSort(int array[],int n)
{
    int i,j,min;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(array[min]>array[j])
                min=j;
        }
        swap(&array[min],&array[i]);
    }
}
yazdir(int array[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf(" %d",array[i]);
}

int main()
{
    int array[MAX];
    int n = sizeof(array)/sizeof(array[0]);

    selectionSort(array,n);
    yazdir(array,n);



    return 0;
}
