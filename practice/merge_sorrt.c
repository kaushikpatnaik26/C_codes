#include <stdio.h>
// fn to sort em arrays...
void sortarr(int a[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j+1] = temp;
            }
        }
    }
}

int main()
{
    int a[] = {3, 6, 8, 4, 2};
    int b[] = {4, 2, 5, 8, 90, 56, 234, 3, 4, 5};
    int sizea = sizeof(a) / sizeof(a[1]);
    int sizeb = sizeof(b) / sizeof(b[1]);
    int merged[sizea + sizeb];

    // merge em arrays...

    for (int i = 0; i < sizea; i++)
    {
        merged[i] = a[i];
    }
    for (int j = 0; j < sizeb; j++)
    {
        merged[sizea + j] = b[j];
    }

    sortarr(merged, sizea + sizeb);

    printf("the sorted array : ");
    for (int i = 0; i < (sizea + sizeb); i++)
    {
        printf(" %d ", merged[i]);
    }
}
