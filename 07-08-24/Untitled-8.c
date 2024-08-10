#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num >= 1 && num <= 10)
    {
        printf("Number is between 1 to 10");
    }
    else if(num >= 11 && num <= 20)
    {
        printf("Number is between 11 to 20");
    }
    else if(num >=34 && num <= 89)
    {
        printf("Number is between 34 to 89");
    }
    else{
        printf("Input Invalid");
    }
    return 0;
}
