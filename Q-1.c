//Q.1 Write a Program to convert temperature from degrees Celsius to Fahrenheit.

#include <stdio.h>

main() 
{
    float c, f;

    // Input temperature in Celsius
    printf("Enter Celsius: ");
    scanf("%f", &c);

    // Convert to Fahrenheit
    f = (c * 9/5) + 32;

    // Print the result
    printf("%.2f C = %.2f F\n", celsius, fahrenheit);

    return 0;
}
