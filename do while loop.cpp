//do while loop for no 1-50, their squares and sums
#include <stdio.h>

int main() {
    int x,y,i = 1, sum = 0, sumofsquares = 0;
     printf("enter a starting number x");
    scanf("%d",&x);
    
    printf("enter a stoping value y");
    scanf("%d",&y);

    do {
        sum += i; 
        sumofsquares += i * i; 

        printf("%d\t%d\n", i, i * i); 

        i++;
    } while (i <=y);

    printf("\nSum of numbers: %d\n", sum);
    printf("Sum of squares : %d\n", sumofsquares);

    return 0;
}