#include <stdio.h>

int main() {
    int num, reversedNum = 0;

    // Take input from user.
    scanf("%d", &num);

    // Reverse the number using a while loop
    while (num != 0) {
        int digit = num % 10; // Get the last digit
        reversedNum = reversedNum * 10 + digit; // Build the reversed number
        num /= 10; // Remove the last digit
    }

    // Print the reversed number
    printf("%d", reversedNum);

    return 0;
}
