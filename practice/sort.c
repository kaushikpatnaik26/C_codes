#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[] = {1, 4, 7, 2, 3, 4, 9};
    int size = sizeof(a)/sizeof(a+1);

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
               int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("the sorted array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
        }
    return 0;
}
