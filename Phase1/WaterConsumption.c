#include <stdio.h>

int main() {
    int T, X; // Declare variables 

    // Read the number of test cases
    scanf("%d", &T);

    // Loop through each test case.
    while (T--) {
        // Read the water intake 
        scanf("%d", &X);

        // Check if Chef drank at least 2000 ml of water
        if (X >= 2000) {
            printf("YES\n"); // Sufficient water intake
        } else {
            printf("NO\n");  // Insufficient water intake
        }
    }

    return 0; 
}
