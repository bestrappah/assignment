//c arrays 1-D arrays
//Author:Peter Paul Munyaka
//Reg No:CT101/G/24684/24
//Date:6/10/2024
#include <stdio.h>
int main() {
    int arr[10];  
    int sum = 0;
    float average;
 for (int i = 0; i < 10; i++) {
        arr[i] = (i + 1) * 5;
    }

   for (int i = 0; i < 10; i++) {
        sum += arr[i];
    }
	average = sum / 10.0;

    
    printf("1D Array");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nSum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}