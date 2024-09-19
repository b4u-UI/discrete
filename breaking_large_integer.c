#include <stdio.h>
#include <string.h>

#define MAX 1000  // Maximum number of digits in large integers

// Function to add two large integers
void addLargeIntegers(char num1[], char num2[], char result[]) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int carry = 0, sum = 0;
    int i = len1 - 1, j = len2 - 1, k = 0;

    // Make result array large enough to hold the sum
    char temp[MAX + 1];

    // Add the numbers from the last digit to the first
    while (i >= 0 || j >= 0 || carry > 0) {
        int digit1 = (i >= 0) ? num1[i--] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j--] - '0' : 0;

        sum = digit1 + digit2 + carry;
        temp[k++] = (sum % 10) + '0';
        carry = sum / 10;
    }

    // Reverse the result since we processed it backwards
    for (i = 0; i < k; i++) {
        result[i] = temp[k - i - 1];
    }
    result[k] = '\0';  // Null-terminate the result string
}

int main() {
    char num1[MAX], num2[MAX], result[MAX + 1];

    // Input large integers as strings
    printf("Enter the first large number: ");
    scanf("%s", num1);
    printf("Enter the second large number: ");
    scanf("%s", num2);

    // Add the large integers
    addLargeIntegers(num1, num2, result);

    // Output the result
    printf("Sum: %s\n", result);

    return 0;
}
