#include <stdio.h>

int main() {
    printf("Educational Qualification: \n1. Graduate\n2. Post-Graduate\n");

    int n;
    printf("Enter your qualification (1/2): ");
    scanf("%d", &n);

    double basic = 0.0, hra = 0.0, da = 0.0, sal = 0.0;
    char c;

    switch(n) {
        case 1:
            basic = 40000;
            hra = 0.25 * basic;
            da = 0.7 * basic;
            sal = basic + hra + da;
            break;
        case 2:
            basic = 50000;
            hra = 0.4 * basic;
            da = 0.9 * basic;
            sal = basic + hra + da;
            break;
        default:
            printf("Invalid input!!\n");
            return 1;
    }
    
    printf("Are you employed here for more than 3 years? (Y/N): ");
    scanf(" %c", &c); 

    switch(c) {
        case 'Y':
        case 'y':
            sal = sal + 25000;
            printf("Basic: %.2f\nHRA: %.2f\nDA: %.2f\n3-year Bonus: 25000\nTOTAL SALARY: %.2f\n", basic, hra, da, sal);
            break;
        case 'N':
        case 'n':
            printf("Basic: %.2f\nHRA: %.2f\nDA: %.2f\nTOTAL SALARY: %.2f\n", basic, hra, da, sal);
            break;
        default:
            printf("Invalid input for employment status!\n");
            return 1;
    }

    return 0;
}
