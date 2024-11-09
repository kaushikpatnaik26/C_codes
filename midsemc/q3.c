#include<stdio.h>
int main()
{
    int eggs;
    int gross, dozen , leftOver;
    printf("enter the name of eggs: ");
    scanf("%d",&eggs);
    dozen = eggs/12;
    leftOver = eggs%12;
    gross = eggs / 144;
    printf("eggs in dozen: %d\n",dozen);
    printf("eggs in gross: %d\n",gross);
    printf("eggs left over: %d\n",leftOver);
    printf("total eggs: %d\n",eggs);
    return 0;
}
