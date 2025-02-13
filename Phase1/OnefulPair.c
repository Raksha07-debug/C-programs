#include <stdio.h>

int main() {
    int a, b; // Declare variables to store user input
    // Take user input for a and b 
    scanf("%d %d", &a, &b);

    // Calculate the result of a + b + (a * b)
    int result = a + b + (a * b);
    
    // Check if the result equals 111
    if(result == 111){
        // Print "YES" if the result equals 111
        printf("YES \n");
    }
    else{
        // Print "NO" if the result does not equal 111
        printf("NO");
    }

}