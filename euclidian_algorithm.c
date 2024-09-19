#include<stdio.h>
int greatestCommonDivisor(int num1, int num2) {
	int remainder;
	if(num1<num2) {
		int temp;
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	while(num2 != 0) {
		remainder = num1 % num2;
		num1 = num2;
		num2 = remainder;
	}
	return num1;
}
int main() {
	int num1, num2;
	printf("Enter any two number: ");
	scanf("%d %d", &num1, &num2);
	int result = greatestCommonDivisor(num1, num2);
	printf("GCD(%d, %d): %d",num1, num2, result);
	return 0;
}
