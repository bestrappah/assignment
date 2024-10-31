//A program to do while loop
//Author:Peter Paul Munyaka
//Reg No:CT101/G/24684/24
//Date:7/10/2024
#include <stdio.h>
struct Student {
    char name[50];
    int marks;
};
int main() {
    int n;
    printf("what is the number of students");
    scanf("%d", &n);

    struct Student students[n];
    FILE *file = fopen("students.txt", "a");  

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter name and marks of student %d: ", i + 1);
        scanf("%s %d", students[i].name, &students[i].marks);
        fprintf(file, "Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }

    fclose(file);
    printf("Data appended to students.txt successfully.\n");
    return 0;
}