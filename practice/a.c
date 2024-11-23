#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a [] = {1, 2, 3, 4, 5};
    int s = sizeof(a)/sizeof;
    /* code */
    printf("arrays: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
        
        }
        printf("%d",s);
    return 0;
}
