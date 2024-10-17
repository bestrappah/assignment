//A program to calculate electricbill
//Author:Peter Paul Munyaka
//Reg No:CT101/G/24684/24
//Date:14/10/2024
#include <stdio.h>
#include <string.h>
#include <math.h>  

float calculateelectricBill(int units) {
    float rate, bill;
    if (units <= 199) {
        rate = 1.20;
    } else if (units >= 200 && units < 400) {
        rate = 1.50;
    } else if (units >= 400 && units < 600) {
        rate = 1.80;
    } else {
        rate = 2.00;
    }

    bill = units * rate;
    
    if (bill > 400) {
        bill += bill * 0.15; 
    }

    if (bill < 100) {
        bill = 100;
    }

    return bill;
}

int main() {
    int customerID, unitsconsumed;
    char customerName[50], copiedCustomerName[50];  
    float bill, rate;

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);  
    printf("Enter Units Consumed: ");
    scanf("%d", &unitsconsumed);

    strcpy(copiedCustomerName, customerName); 
    bill = calculateelectricBill(unitsconsumed);
    bill = ceil(bill);

    printf("\n   Electricity Bill \n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", copiedCustomerName); 
    printf("Units Consumed: %d\n", unitsconsumed);
    
    if (unitsconsumed <= 199) {
        rate = 1.20;
    } else if (unitsconsumed >= 200 && unitsconsumed < 400) {
        rate = 1.50;
    } else if (unitsconsumed >= 400 && unitsconsumed < 600) {
        rate = 1.80;
    } else {
        rate = 2.00;
    }

    printf("Charge per Unit: %.2f\n", rate);
    printf("Total Amount to Pay: Ksh %.2f\n", bill);

    return 0;
}