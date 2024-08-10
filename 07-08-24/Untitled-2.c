#include<stdio.h>
int main()
{
    char month;
    printf("Enter a Number (1-12) : ");
    scanf("%d",&month);

    if(month == 1)
    {
        printf("January\n");
    }
    else if(month == 2)
    {
        printf("February\n");
    }
    else if(month == 3)
    {
        printf("March");
    }
    else if(month == 4)
    {
        printf("April");
    }
    else if(month == 5)
    {
        printf("May");
    }
    else if(month == 6)
    {
        printf("June");
    }
    else if(month == 7)
    {
        printf("July");
    }
    else if(month == 8)
    {
        printf("August");
    }
    else if(month == 9)
    {
        printf("September");
    }
    else if(month == 10)
    {
        printf("October");
    }
    else if(month == 11)
    {
        printf("November");
    }
    else if(month == 12)
    {
        printf("December");
    }
    else{
        printf("Invalid input! Enter a number between 1 and 12\n");
    }
    return 0;
    
}
