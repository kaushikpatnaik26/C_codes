#include <stdio.h>
void selection_sort(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int Min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (a[j] < a[Min])
            {
                Min = j;
            }
        }
        if(Min != i)
        {
            int temp = a[i];
            a[i] = a[Min];
            a[Min] = temp;
        }
    }
}
int main()
{
    int a[] = {1, 9, 8, 7, 4, 5, 6, 3, 0};
    int size = sizeof(a) / sizeof(a[0]);
    selection_sort(a, size);
    printf("the sorted array is: ");
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", a[i]);
    }
    return 0;
}
