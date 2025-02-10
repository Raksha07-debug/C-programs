#include <stdio.h>

int main() {
    // Declare variables to store temperature in Fahrenheit and Celsius
    float fahrenheit, celsius;

    // Prompt user to enter temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert Fahrenheit to Celsius using the formula: (°F - 32) × 5/9 = °C
    celsius = (fahrenheit - 32) * 5.0/9.0;

    // Display the result with two decimal places
    printf("%.2f Fahrenheit is equal to %.2f Celsius\n", fahrenheit, celsius);

    return 0;
}