#include <stdio.h>
void sortarr(int a[], int size) 
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i; j < size - 1; j++)
        {
            if (a[j] < a[i])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void printarr(int a[], int size) 
{
    for(int i=0; i< size; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int a[] = {2, 1, 3, 1, 4, 6, 5, 7, 8};
    int size = sizeof(a) / sizeof(a[0]);

    printf("The entered array: ");
    printarr(a,size);

    sortarr(a, size);

    printf("\nSorted array : ");
    printarr(a,size);

    printf("\nPrinting odd number ahead of even: ");

    for (int i = 0; i < size ; i++)
        {
            if(a[i]%2 != 0)
            {
                printf("%d " ,a[i]);
            }
        }
    for (int i = 0; i < size; i++)
    {
        if (a[i]%2 ==0)
        {
            printf("%d " ,a[i]);
        }
        
    }
    return 0;
}
