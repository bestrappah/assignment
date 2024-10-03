//Bank loan application
//Author:Peter Paul Munyaka
//Reg No:CT101/G/24684/24
//Date:30/09/2024
#include <stdio.h>
int main() {
    // Variable declaration
    float age,income;
    
    //determine age and income
    printf("Please enter your age here: ");
    scanf("%d", &age);
    
    printf("Please enter your annual income here(KSH): ");
    scanf("%f", &income);
    
    //Determine if customer qualifies for a loan
    if(age >= 21 && income >= 21000){
        printf("Congratulations you qualify for a loan.");
    }else{
        printf("Unfortunately, we are unable to offer you a loan at this time");
    }

    return 0;
}