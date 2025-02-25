#include <stdio.h>

int main() { 
   
    int N, i = 2, isPrime = 1;
    scanf("%d", &N);
    if (N <= 1) {
        isPrime = 0;
    } else {
        while (i * i <= N) {
            if (N % i == 0) {
                isPrime = 0; 
                break;
            }
            i++;
        }
    }

    if (isPrime)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}

