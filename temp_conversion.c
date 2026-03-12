#include<stdio.h>

int main()
{
    float C,F;
    printf("Enter the temperature in centigrate:");
    scanf("%f",&C);
    F=(C*9/5)+32;
    printf("%f centigrate in fahrenheit is %f",C,F);

    return 0;
}