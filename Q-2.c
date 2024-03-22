//Q.2 Write C Program to find gross salary by adding % of HRA, DA, and TA of user choice.
#include <stdio.h>

main() 
{
    float base_salary, hra_perc, da_perc, ta_perc;
    float gross_salary;

//		hra = 10% , da = 5% , ta = 8%;
		
    printf("Enter base salary: ");
    scanf("%f", &base_salary);

    printf("Enter percentage of HRA: ");
    scanf("%f", &hra_perc);

    printf("Enter percentage of DA: ");
    scanf("%f", &da_perc);

    printf("Enter percentage of TA: ");
    scanf("%f", &ta_perc);

    float hra = (hra_perc / 100) * base_salary;
    float da = (da_perc / 100) * base_salary;
    float ta = (ta_perc / 100) * base_salary;

    gross_salary = base_salary + hra + da + ta;

    printf("Gross Salary = %.2f + %.2f + %.2f + %.2f = %.2f\n", base_salary, hra, da, ta, gross_salary);

}