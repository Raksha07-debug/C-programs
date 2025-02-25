#include <stdio.h>

int main() {
    int t, x, y;
    //take input from user
    scanf("%d", &t); 

    while (t--) {
        scanf("%d %d", &x, &y); 
        //check sum is greater than 6 or not 
        if (x + y > 6) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

