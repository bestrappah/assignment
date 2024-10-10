//Eletricity Bill Calculator
//Author:Peter Paul Munyaka
//Reg No:CT101/G/24684/24
//Date:6/10/2024
#include <stdio.h>
int main() {
    int customerID, unitsConsumed;
    char customerName[50];
    float chargePerUnit, totalBill, surcharge = 0.0;

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter Customer Name: ");
    scanf("%s", customerName);

    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);

    if (unitsConsumed <= 199) {
        chargePerUnit = 1.20;
    } else if (unitsConsumed >= 200 && unitsConsumed < 400) {
        chargePerUnit = 1.50;
    } else if (unitsConsumed >= 400 && unitsConsumed < 600) {
        chargePerUnit = 1.80;
    } else {
        chargePerUnit = 2.00;
    }

    totalBill = unitsConsumed * chargePerUnit;
   
    if (totalBill > 400) {
        surcharge = totalBill * 0.15;
    }

    if (totalBill < 100) {
        totalBill = 100;
    } else {
        totalBill += surcharge;
    }
    
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Charge Per Unit: %.2f Kshs\n", chargePerUnit);
    printf("Total Amount to Pay: %.2f Kshs\n", totalBill);

return 0;
}