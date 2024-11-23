#include <stdio.h>
void sumarr(int a[], int b[], int r[], int size)
{
    for(int i=0; i>size; i++)
    {
        int r[i] = int a[i] + int b[i];
    }

    int main(int argc, char const *argv[])
    {
        int size[]= 4;
        int a[] = {1,2,3,4};
        int b[] = {5,6,7,8};
        sumarr(a,b,r,size)

        for (int i = 0; i < size; i++)
        {
            printf("%d ", r[i]);
            /* code */
        }
        return 0;
    }
    
}