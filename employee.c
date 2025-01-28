#include <stdio.h>
#include <string.h>
struct Employee {
    int employeeID;
    char name[50];
    float salary;
};
struct Employee findHighestSalary(struct Employee emp1, struct Employee emp2, struct Employee emp3) {
    struct Employee highest;
    if (emp1.salary >= emp2.salary && emp1.salary >= emp3.salary) {
        highest = emp1;
    } else if (emp2.salary >= emp1.salary && emp2.salary >= emp3.salary) {
        highest = emp2;
    } else {
        highest = emp3;
    }
    return highest;
}
int main() {
    struct Employee emp1, emp2, emp3, highest;
    printf("Sakshi Yadav\n");
    printf("Enter details for Employee 1:\n");
    printf("Employee ID: ");
    scanf("%d", &emp1.employeeID);
    printf("Name: ");
    scanf(" %[^\n]", emp1.name); 
    printf("Salary: ");
    scanf("%f", &emp1.salary);
    printf("\nEnter details for Employee 2:\n");
    printf("Employee ID: ");
    scanf("%d", &emp2.employeeID);
    printf("Name: ");
    scanf(" %[^\n]", emp2.name);
    printf("Salary: ");
    scanf("%f", &emp2.salary);
    printf("\nEnter details for Employee 3:\n");
    printf("Employee ID: ");
    scanf("%d", &emp3.employeeID);
    printf("Name: ");
    scanf(" %[^\n]", emp3.name);
    printf("Salary: ");
    scanf("%f", &emp3.salary);
    highest = findHighestSalary(emp1, emp2, emp3);
    printf("\nThe employee with the highest salary is:\n");
    printf("Employee ID: %d\n", highest.employeeID);
    printf("Name: %s\n", highest.name);
    printf("Salary: %.2f\n", highest.salary);
    return 0;
}
