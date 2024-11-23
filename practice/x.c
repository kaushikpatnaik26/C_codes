#include <stdio.h>

void mergesort(int a[], int size1, int b[], int size2, int merged[])
{
    int i=0,j=0,index =0;

    while(i < size1 && j < size2)
    {
        if(a[i] < b[j] )
        {
            merged[index++] = a[i++];
        }
        else { merged[index++] = b[j++]; }
    }
    while(i < size1){
        merged[index++] = a[i++];
    }
    while(j < size2){
        merged[index++] = b[j++];}
    }

int main()
{
    int a[] = {1,4,2,5,6};
    int b []= {3,2,5,6,7};
    int size1 = sizeof(a)/sizeof(a+1);
    int size2 = sizeof(b)/sizeof(b+1);
    int merged[size1+size2];

    mergesort(a,size1,b, size2,merged );

    for(int i=0 ; i< size1+size2; i++)
    {
        printf("%d", merged[i]);
    }
}