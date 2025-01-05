#include<stdio.h>
#include<string.h>
int main()
 {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int lenght = strlen(str);
    
    printf("reverse of the string is :\n ");

    for(int i = lenght -1 ; i >=0; i--){
        printf("| %c |", str[i]);
    }
    
    return 0; 
}