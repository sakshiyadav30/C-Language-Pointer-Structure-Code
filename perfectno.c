#include <stdio.h>
int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}
void findPerfectNumbers(int lower, int upper) {
    printf("The perfect numbers between %d to %d are:\n", lower, upper);
    for (int i = lower; i <= upper; i++) {
        if (isPerfect(i)) {
            printf("%d  ", i);
        }
    }
    printf("\n");
}
int main() {
    int lower, upper;
    printf("Sakshi Yadav\n");
    printf("Input the lowest search limit of perfect numbers: ");
    scanf("%d", &lower);
    printf("Input the highest search limit of perfect numbers: ");
    scanf("%d", &upper);
    findPerfectNumbers(lower, upper);
    return 0;
}
