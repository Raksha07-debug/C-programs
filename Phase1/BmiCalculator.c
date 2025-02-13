#include <stdio.h>

int main() {
    float height = 1.82;
    float weight = 72;
    float bmi = weight / (height * height);
    
//print bmi of an individual 
     printf("%.2f\n", bmi);
    
    return 0;
    
}