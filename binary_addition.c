#include<stdio.h>
int main() {
    int num1, num2, i=0;
    int carry = 0, sum[20];
    printf("Enter first bianry number: ");
    scanf("%d", &num1);
    printf("Enter second binary number: ");
    scanf("%d", &num2);

    while(num1!=0 || num2!=0) {
        sum[i] = (num1 % 10 + num2 % 10 + carry) % 2;
        carry = (num1 % 10 + num2 % 10 + carry) / 2;
        i++; 
        num1/=10;
        num2/=10;
    }
    if(carry != 0) {
        sum[i] = carry;
        i++;
    }
    printf("Addition: ");
    while (i > 0) {
        i--;
        printf("%d", sum[i]);
    }
    return 0;
}