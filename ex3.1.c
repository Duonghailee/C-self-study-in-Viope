#include <stdio.h>
int main(void){
    int inter;
    float flo;
    printf("Enter an integer: \n");
    scanf("%d", &inter);
    printf("Enter a decimal number: \n");
    scanf("%f", &flo);
    printf("You entered the integer: %d\n", inter);
    printf("You entered the decimal number, rounded to two decimal places: %.2f\n", flo);
    return 0;
    }
