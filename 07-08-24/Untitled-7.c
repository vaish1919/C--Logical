#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0 && num % 3 ==0)
    {
        printf("2 and 3 both");
    }
    else if(num % 5 == 0 && num % 4 ==0)
    {
        printf("5 and 4 both");
    }
    else if(num % 6 == 0 || num % 9 ==0)
    {
        printf("6 or 9 anyone");
    }
    else if(num % 3 == 0 || num % 8 ==0)
    {
        printf("3 or 8 anyone");
    }
    else{
        printf("Input Invalid");
    }
    return 0;
}
