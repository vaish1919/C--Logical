#include<stdio.h>
int main()
{
    int day;
    printf("Enter a number (1-7): ");
    scanf("%d",&day);

    if(day == 1)
    {
        printf("Monday\n");
    }
    else if(day == 2)
    {
        printf("Tuesday\n");
    }
    else if(day == 3)
    {
        printf("Wednesday");
    }
    else if(day == 4)
    {
        printf("Thursday");
    }
    else if(day == 5)
    {
        printf("Friday");
    }
    else if(day == 6)
    {
        printf("Saturday");
    }
    else if(day == 7)
    {
        printf("Sunday");
    }
    else{
        printf("Invalid input! Enter a number between 1 and 7\n");
    }
    return 0;
    
}