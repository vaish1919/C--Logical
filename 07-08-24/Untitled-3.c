#include<stdio.h>
int main()
{
    int season;
    printf("Enter a Number (1-4): ");
    scanf("%d",&season);

    if(season == 1)
    {
        printf("Spring\n");
    }
    else if(season == 2)
    {
        printf("Summer\n");
    }
    else if(season == 3)
    {
        printf("Autmn\n");
    }
    else if(season == 4)
    {
        printf("Winter\n");
    }
    else 
    {
        printf("Invalid Input");
    }
    return 0;
    
}