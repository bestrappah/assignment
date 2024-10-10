//A program to calculate sum and square of numbers
//Author:Peter Paul Munyaka
//Reg No:CT101/G/24684/24
//Date:7/10/2024
#include <stdio.h>

int main() {
    int i,x,y ,sum = 0, sumOfSquares = 0;
    printf("enter a starting number x");
    scanf("%d",&x);
    
    printf("enter a stoping value y");
    scanf("%d",&y);

    for (int i= x; i <= y; i++) {
    
        sum += i; 

        sumOfSquares += i * i;  
        printf("%d\t%d\n", i, i * i);  
    }

    printf("\nSum of numbers: %d\n", sum);
    printf("Sum of squares : %d\n", sumOfSquares);

return 0;
}