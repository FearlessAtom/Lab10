#include <stdio.h>
int main() {
    int number;
    do{printf("Enter a natural number n: ");scanf_s("%d", &number);
    if(number < 0){printf("The input has to be a natural number!\n");}
    }while(number < 0);
    printf("Prime factors of %d is : ", number);
    for (int index = 2; index <= number; index++) {
        while (number % index == 0) {
            printf("%d ",index);
            number = number / index;}}
    return 0;}