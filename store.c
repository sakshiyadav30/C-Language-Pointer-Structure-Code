#include <stdio.h>
int main() {
    int n;
    printf("Sakshi Yadav\n");
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n]; 
    int *ptr = arr; 
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i); 
    }
    printf("The elements in the array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i)); 
    }
    printf("\n");
    return 0;
}
