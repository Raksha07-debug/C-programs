#include <stdio.h>

int main() {
    int X, Y; // X = threshold limit, Y = current speed

    // Read input values for X and Y
    scanf("%d %d", &X, &Y);

    // Check if Chef's speed exceeds the threshold
    if (Y > X) {
        printf("YES\n"); // Chef is prone to errors
    } else {
        printf("NO\n");  // Chef is not prone to errors
    }

    return 0; 
}
