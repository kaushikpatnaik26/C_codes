#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int b[] = {2, 3, 4, 5};
    int diff[5];
    int asize = sizeof(a) / sizeof(a + 1);
    int bsize = sizeof(b) / sizeof(b + 1);
    int found = 0;
    for (int i = 0; i < asize; i++)
    {
        for (int j = 0; j < bsize; j++)
        {
            if (a[i] == a[j])
            {
                found++;
            }
        }
        if (found == 0)
        {
            diff[index++] = a[i];
        }
    }

    printf("DIFF OF ARRAYS : "  );
        for (int i=0; i<10; i++)
        {
            printf("%d",diff[i]);
        }
}