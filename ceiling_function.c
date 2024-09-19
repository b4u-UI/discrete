#include<stdio.h>
int ceiling(double num) {
	int intNum;
	intNum = (int) num;
	if(num > intNum) {
		return intNum + 1;
	}
	else {
		return intNum;
	}
}
int floor(double num) {
	int intNum;
	intNum = (int)num;
	if(num != intNum) {
		return intNum;
	}
	else {
		return intNum;
	}
}
int main() {
	double userNum;
	printf("Enter number(In Decimal): ");
	scanf("%lf", &userNum);
	int result = ceiling(userNum);
	printf("Ceiling fucntion of %.2lf is %d\n", userNum, result);
	printf("Floor function of %.2lf is %d\n", userNum, floor(userNum));
	return 0;
}
