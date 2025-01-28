#include <stdio.h>
int countDigits(int num) {
    if (num == 0) {
        return 0;
    }
    return 1 + countDigits(num / 10);
}
int main() {
    int number;
    printf("Sakshi Yadav\n");
    printf("Enter a number to count its digits: ");
    scanf("%d", &number);
    if (number == 0) {
        printf("The number of digits in %d is: 1\n", number);
    } else {
        printf("The number of digits in %d is: %d\n", number, countDigits(number));
    }
    return 0;
}
