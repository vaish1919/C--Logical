#include<stdio.h>
int main()
{

    char ch;
    printf("Enter a character (a,b,c,d): ");
    scanf("%c",&ch);


    if (ch == 'a')
    {
        printf("a : apple");
    }
    else if(ch == 'b')
    {
        printf("b : ball");
    }
    else if(ch == 'c')
    {
        printf("c : cat");
    }
    else if(ch == 'd')
    {
        printf("d : dog");
    }
    else
    {
        printf("Input is not valid");
    }
    return 0;


}