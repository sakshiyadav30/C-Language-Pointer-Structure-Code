#include <stdio.h>
struct Student {
    char name[50];
    int age;
    float totalMarks;
};
int main() {
    struct Student s1, s2;
    float average;
    printf("Sakshi Yadav\n");
    printf("Enter the details of the first student:\n");
    printf("Name: ");
    scanf(" %[^\n]", s1.name); 
    printf("Age: ");
    scanf("%d", &s1.age);
    printf("Total Marks: ");
    scanf("%f", &s1.totalMarks);
    printf("\nEnter the details of the second student:\n");
    printf("Name: ");
    scanf(" %[^\n]", s2.name);
    printf("Age: ");
    scanf("%d", &s2.age);
    printf("Total Marks: ");
    scanf("%f", &s2.totalMarks);
    average = (s1.totalMarks + s2.totalMarks) / 2;
    printf("\nStudent 1 Details:\n");
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Total Marks: %.2f\n", s1.totalMarks);
    printf("\nStudent 2 Details:\n");
    printf("Name: %s\n", s2.name);
    printf("Age: %d\n", s2.age);
    printf("Total Marks: %.2f\n", s2.totalMarks);
    printf("\nAverage of Total Marks: %.2f\n", average);
    return 0;
}
