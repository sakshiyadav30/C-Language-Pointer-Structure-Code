#include <stdio.h>
int main() {
    int num1, num2;
    int *ptr1, *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    printf("Sakshi Yadav\n");
    printf("Enter the first number: ");
    scanf("%d", ptr1);
    printf("Enter the second number: ");
    scanf("%d", ptr2);
    if (*ptr1 > *ptr2) {
        printf("The maximum number is: %d\n", *ptr1);
    } else {
        printf("The maximum number is: %d\n", *ptr2);
    }
    return 0;
}
