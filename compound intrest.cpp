//A program to calculate compound intrest
//Author:Peter Paul Munyaka
//Reg No:CT101/G/24684/24
//Date:30/09/2024
#include<stdio.h>
#include <math.h>
int main (){
	float principle,rate,time,compound_intrest,amount;
	
	printf("Enter principle:");
	scanf("%f" ,&principle);
	
	printf("Enter rate:");
	scanf("%f" ,&rate);
	
	printf("Enter time:");
	scanf("%f" ,&time);
	
	amount=principle * pow(1+rate/100,time);
	compound_intrest=amount-principle;

    printf("\t......CALCULATION.....\n");
    printf("Amount is %.4f \n" ,amount);
	printf("Compound_interest is %.4f \n"  ,compound_intrest);
	
	return 0;
}