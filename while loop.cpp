//A program to do while loop
//Author:Peter Paul Munyaka
//Reg No:CT101/G/24684/24
//Date:7/10/2024
#include <stdio.h>

int main() {
    int i,sum,sumofsquares;

    while (i <= 50) {
        sum += i; 
        sumofsquares += i * i;  
        printf(" %d\t%d\n", i, i * i); 
        i++;
    }

    printf("\nSum of numbers : %d\n", sum);
    printf("Sum of squares of numbers : %d\n", sumofsquares);

return 0;
}