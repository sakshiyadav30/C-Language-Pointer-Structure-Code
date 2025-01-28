#include <stdio.h>
int main() {
    int number = 10;       
    int *ptr;   
    ptr = &number;
    printf("Sakshi Yadav\n");
    printf("Value of 'number': %d\n", number);             
    printf("Address of 'number': %p\n", (void*)&number);   
    printf("Value of 'ptr': %p\n", (void*)ptr);            
    printf("Value pointed to by 'ptr': %d\n", *ptr);      
    return 0;
}
