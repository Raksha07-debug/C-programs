#include <stdio.h>

int main() {
    int a, b; // Declare variables for the input integers.

    // Read input values for a and b
    scanf("%d %d", &a, &b);

    // Check if the given pair satisfies the condition: a + b + (a * b) = 111
    if (a + b + (a * b) == 111) {
        printf("Yes\n"); // print "Yes"
    } else {
        printf("No\n");  // Otherwise, print "No"
    }

    return 0; 
}
