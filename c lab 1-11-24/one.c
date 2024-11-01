#include <stdio.h>

int main()
{
    char s1[20] = {'A','Y','O','N','A','\0'};
    char s2[20] = {'S','E','N','O','\0'};
    //char s3[20] = "trend";
    char s4[] = "computer science";
    char *cp = "super string";
    //char *sp;
    //char s5[20];
    char s6[20];
    char s7[30];

    printf("s1: %s\n",s1);
    printf("s2: %s\n",s2);
    printf("cp: %s\n", cp);
    //printf("Enter name of 5 students: \n");
    //scanf("%s", s5);
    printf("Enter name of 5 students: \n");
    //scanf("%[^\n]s", cp);
    fgets(s6,20,stdin);
    int n = strlen(s4);
    printf("%d\n", n);
    strcpy (s7,s6);

    //printf("s1[0] = %c, s2[1] = %c, s3[2] = %c, cp[3] = %c\n", s1[0],s2[1],s3[2],cp[3]);
    //printf("s5: %s\n", s5);
    printf("s6: %s\n", s6);
    printf("s7: %s\n", s7);

}