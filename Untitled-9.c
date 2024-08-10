#include<stdio.h>
int main()
{
    float name,address,bank_details ;
    float salary,holidays,final_salary;
    float deduction;

    printf("Employee Name: ");
    scanf("%f",&name);

    printf("Address: ");
    scanf("%f",&address);

    printf("Enter the salary: ");
    scanf("%f",&salary);

    printf("Enter the number: ");
    scanf("%f",&holidays);

    printf("bank details: ");
    scanf("%f",&bank_details);

    if(holidays == 1)
    {
        deduction = 0;
    }
    else if(holidays >= 2 && holidays <= 5)
    {
        deduction = 0.05*salary;
    }

    else if(holidays == 15)
    {
        deduction = salary;
    }
    else
    {
        deduction = salary;
    }

    final_salary = salary - deduction;

    printf("\n Name: %f\n", name);
    printf("Address: %f\n",address);
    printf("Bank Details: %f\n", bank_details);
    printf("Salary: %f\n", salary);
    printf("Deduction: %f\n", deduction);
    printf("Final Salary: %f\n", final_salary);

    return 0;
    




}