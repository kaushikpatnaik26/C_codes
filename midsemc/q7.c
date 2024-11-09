#include<stdio.h>
int main(){
	int num, digit, sum = 0;
	scanf("%d", &num);
	int num1 = num;
	while (num > 0){
		digit = num % 10;
		num /= 10;
		sum += digit;
		printf("%d\n", digit);
	}

	if(sum % 9 ==0 ){
		printf("%d is divisible by 9\n", num1);
	}else{
		printf("%d is NOT divisible by 9\n", num1);
	}
}
