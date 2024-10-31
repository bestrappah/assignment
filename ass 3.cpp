//A program to do while loop
//Author:Peter Paul Munyaka
//Reg No:CT101/G/24684/24
//Date:27/10/2024
#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *fptr;
    char name[50];
    int marks;

    fptr = fopen("students.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    for (int i = 0; i < 5; i++) {
        printf("Enter name and marks of student %d: ", i + 1);
        fscanf(stdin, "%s %d", name, &marks);  // Using fscanf to read from standard input
        fprintf(fptr, "Name: %s, Marks: %d\n", name, marks);
    }

    fclose(fptr);
    printf("Data saved to students.txt successfully.\n");
    return 0;
}