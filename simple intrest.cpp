//a program to calculate simple intrest
//Author:Peter Paul Munyaka
//Reg No:CT101/G/24684/24
//Date:30/09/2024
#include <stdio.h>
#include<math.h>
int main() {
	float principle,rate,time,simple_intrest;
	printf("what is your principle");
	scanf("%f",&principle);
	
	printf("what is the rate");
	scanf("%f",&rate);
	
	printf("enter time");
	scanf("%f",&time);
	
	simple_intrest=(principle*rate*time)/100;
	printf("the intrest generated is %f",simple_intrest);
	
	return 0;
}