//Q.3 Write C Program to find the third angle of a right triangle if two other angles are given.

#include <stdio.h>

int main() {
    float a, b, c;

    // Input the first two angles
    
      a = 65, b = 45;
    printf("Enter the first angle (in degrees): ");
    scanf("%f", &a);

    printf("Enter the second angle (in degrees) ");
	scanf("%f", &b);    

    // Calculate the third angle
    c = 180 - (a + b);

    // Print the result
    printf("Third angle : %.2f degrees\n", c);
    
}
