#include<stdio.h>
int main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);
    if(num>10)
    {
        printf("num is greater than 10");
    }
    else
    {
        printf("num is smaller than 10");
    }
    return  0;
}