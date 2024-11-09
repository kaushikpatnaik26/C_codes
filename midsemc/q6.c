#include<stdio.h>
int main(){
	int marks;
	printf("Enter marks: ");
	scanf("%d", &marks);
	if(marks > 100 || marks < 0){
		printf("Invalid input\n");
	}else{
		if(marks >= 80){
			printf("Grade A\n");
		}
		else if(marks >= 65 && marks <= 79){
			printf("Grade B\n");
		}
		else if(marks >= 40 && marks <= 64){
			printf("Grade C\n");
		}
		else{
			printf("Grade F\n");
		}
	}
}