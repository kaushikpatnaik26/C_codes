#include <stdio.h>

int main() {

    int attendance; 
    int midsem_mark; 
    int quiz_tests_attempted; 
    int quiz_marks[10]; 
    int assignment_submitted; 
    int assignment_marks[10]; 
    int end_sem;
    int lab;
    int external;

    printf("Enter attendance percentage: "); 
    scanf("%d", &attendance);
    
    int internal_marks = 0;
    
    if (attendance > 75) {
        internal_marks += 5;
    }

    printf("Enter midsem marks: "); 
    scanf("%d", &midsem_mark);
    
    internal_marks += (midsem_mark / 2);
    
    printf("Enter number of quiz tests attempted out of 5: ");
    scanf("%d", &quiz_tests_attempted);
    
    for (int i = 0; i < quiz_tests_attempted; i++) {
        printf("Enter marks scored in quiz %d out of 5: ", i+1); 
        scanf("%d", &quiz_marks[i]); 
        internal_marks += (quiz_marks[i])/quiz_tests_attempted; 
    }
    
    printf("Enter number of assignments submitted out of 5: ");
    scanf("%d", &assignment_submitted);
    
    for (int i = 0; i < assignment_submitted; i++) {
        printf("Enter marks scored in assignment %d out of 5: ", i+1); 
        scanf("%d", &assignment_marks[i]); 
        internal_marks += (assignment_marks[i])/5;
    }
    printf("Enter end semester marks out of 45: ");
    scanf("%d", &end_sem);

    printf("Enter lab marks out of 15: ");
    scanf("%d", &lab);

    external = end_sem + lab;

    if(external > 24 && internal_marks > 15) { 
        printf("Pass");
    } else {
        printf("Fail");
    }
    printf("\n");
    printf("Total internal marks: %d\n", internal_marks);
    printf("Total external marks: %d\n", external);
    
    return 0;
}