#include <stdio.h>
void decimalToBinary(int num) {
    if (num == 0) {
        return;
    }
    decimalToBinary(num / 2);
    printf("%d", num % 2);
}
int main() {
    int decimalNumber;
    printf("Sakshi Yadav\n");
    printf("Input any decimal number: ");
    scanf("%d", &decimalNumber);
    if (decimalNumber == 0) {
        printf("The Binary value of decimal no. 0 is: 0\n");
    } else {
        printf("The Binary value of decimal no. %d is: ", decimalNumber);
        decimalToBinary(decimalNumber);
        printf("\n");
    }
    return 0;
}
