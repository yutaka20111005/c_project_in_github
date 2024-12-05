#include<stdio.h>

int add(int a, int b){
	return a + b;
}

int main(){
	int num1, num2, sum;
	// input 2 numbers by user
	printf("Input first number: ");
	scanf("%d", &num1);
	printf("Input second number: ");
	scanf("%d", &num2);

	sum = add(num1, num2);

	printf("Sum of %d and %d is %d\n", num1, num2, sum);
	return 0;
}
